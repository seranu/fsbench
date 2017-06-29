#ifndef __ENVIRONMENT_H__
#define __ENVIRONMENT_H__

#include <cassert>

#include <string>
#include <ostream>
#include <memory>

namespace NFSBenchmark {

enum class TPlatform { Linux, Windows, WINCE, OSX, Android, QNX, Invalid };

std::string TPlatformToString(TPlatform aPlatform);

std::ostream& operator<<(std::ostream& aOut, TPlatform aPlatform) {
  return aOut << TPlatformToString(aPlatform);
}

class Environment {
 public:
  static TPlatform CurrentPlatform() {
    TPlatform currentPlatform = TPlatform::Invalid;
#if defined(__linux__)
#if defined(__ANDROID__)
    currentPlatform = TPlatform::Android;
#else
    currentPlatform = TPlatform::Linux;
#endif
#elif defined(_WIN32)
    // todo: is _WIN32 defined for WINCE?
#if defined(_WIN32_WCE)
    currentPlatform = TPlatform::WINCE;
#else
    currentPlatform = TPlatform::Windows;
#endif
#elif defined(__APPLE__) && defined(__MACH__)
    currentPlatform = TPlatform::OSX;
#elif defined(__QNX__)
    currentPlatform = TPlatform::QNX;
#endif
    assert(currentPlatform != TPlatform::Invalid &&
           "Warning: Invalid platform");

    return currentPlatform;
  }

 private:
  Environment(){};
};
}

#endif  //__ENVIRONMENT_H__
