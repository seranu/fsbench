#ifndef __ITESTCASE_H__
#define __ITESTCASE_H__

#include <Environment.h>

#include <string>

namespace NFSBenchmark {
class ITestCase {
 public:
  virtual void Initialize(const std::string& aPath) = 0;
  virtual void Run() = 0;
  virtual void Report() = 0;
  virtual bool IsAvailable(const Environment& aEnvironment) = 0;

  virtual ~ITestCase() {}
};
}  // namespace NFSBenchmark

#endif  //__ITESTCASE_H__
