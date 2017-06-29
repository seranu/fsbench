#ifndef __ITESTCASE_H__
#define __ITESTCASE_H__
#include <string>

namespace NFSBenchmark
{
class ITestCase
{
 public:
  virtual void Initialize(const std::string& path) = 0;
  virtual void Run() = 0;
  virtual void Report() = 0;
  virtual bool IsAvailable() = 0;

  virtual ~ITestCase() {}
};
} // namespace NFSBenchmark

#endif //__ITESTCASE_H__
