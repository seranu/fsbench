#ifndef __TESTRUNNER_H__
#define __TESTRUNNER_H__

#include <ITestCase.h>

#include <vector>
#include <memory>

namespace NFSBenchmark
{
class TestRunner
{
 public:
  void RegisterTestCase(std::unique_ptr<ITestCase> aTestCase);
  void Run();
 private:
  std::vector<std::unique_ptr<ITestCase>> iTestCases;
};
} // namespace NFSBenchmark
#endif //__TESTRUNNER_H__
