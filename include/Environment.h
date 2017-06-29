#ifndef __ENVIRONMENT_H__
#define __ENVIRONMENT_H__

#include <cassert>

#include <string>
#include <ostream>
#include <memory>

namespace NFSBenchmark {

enum class TPlatform { Linux, Windows, WINCE, OSX, Android, QNX, Invalid };

std::string TPlatformToString(TPlatform aPlatform);

inline std::ostream& operator<<(std::ostream& aOut, TPlatform aPlatform) {
  return aOut << TPlatformToString(aPlatform);
}

class Environment {
 public:
  static const Environment& GetInstance() {
    static Environment instance;
    return instance;
  }

  inline TPlatform CurrentPlatform() const { return iCurrentPlatform; }

  Environment(Environment const&) = delete;
  void operator=(Environment const&) = delete;

 private:
  TPlatform iCurrentPlatform;
  Environment();
};
}

#endif  //__ENVIRONMENT_H__
