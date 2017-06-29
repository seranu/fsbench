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

}  // namespace NFSBenchmark
