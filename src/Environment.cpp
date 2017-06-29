#include <Environment.h>

#include <map>

namespace NFSBenchmark {
static std::map<int, std::string> platformToStringMap = {
    {static_cast<int>(TPlatform::Linux), "Linux"},
    {static_cast<int>(TPlatform::Windows), "Windows"},
    {static_cast<int>(TPlatform::WINCE), "WINCE"},
    {static_cast<int>(TPlatform::OSX), "OSX"},
    {static_cast<int>(TPlatform::Android), "Android"},
    {static_cast<int>(TPlatform::QNX), "QNX"},
    {static_cast<int>(TPlatform::Invalid), "Invalid"}};

std::string TPlatformToString(TPlatform aPlatform) {
  int key = static_cast<int>(aPlatform);
  return platformToStringMap[key];
}

Environment::Environment() : iCurrentPlatform(TPlatform::Invalid) {
#if defined(__linux__)
#if defined(__ANDROID__)
  iCurrentPlatform = TPlatform::Android;
#else
  iCurrentPlatform = TPlatform::Linux;
#endif
#elif defined(_WIN32)
// todo: is _WIN32 defined for WINCE?
#if defined(_WIN32_WCE)
  iCurrentPlatform = TPlatform::WINCE;
#else
  iCurrentPlatform = TPlatform::Windows;
#endif
#elif defined(__APPLE__) && defined(__MACH__)
  iCurrentPlatform = TPlatform::OSX;
#elif defined(__QNX__)
  iCurrentPlatform = TPlatform::QNX;
#endif
  assert(iCurrentPlatform != TPlatform::Invalid && "Warning: Invalid platform");
}

TPlatform Environment::CurrentPlatform() {}

}  // namespace NFSBenchmark
