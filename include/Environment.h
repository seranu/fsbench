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
  const Environment& GetInstance() { return iInstance; }
  TPlatform CurrentPlatform() { return iCurrentPlatform; }

 private:
  static Environment iInstance;

  TPlatform iCurrentPlatform;
  Environment();
};
}

#endif  //__ENVIRONMENT_H__
