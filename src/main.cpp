#include <TestRunner.h>
#include <Environment.h>
#include <iostream>

int main()
{
  NFSBenchmark::TestRunner runner;
  std::cout << NFSBenchmark::Environment::CurrentPlatform();

  return 0;
}
