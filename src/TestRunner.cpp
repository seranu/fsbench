#include "TestRunner.h"

namespace NFSBenchmark
{

void TestRunner::RegisterTestCase(std::unique_ptr<ITestCase> aTestCase)
{
  iTestCases.push_back(std::move(aTestCase));
}

void TestRunner::Run()
{
  for(auto& testCase : iTestCases)
  {
    testCase->Run();
    // ?
    testCase->Report();
  }
}

}  // namespace NFSBenchmark
