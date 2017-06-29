#ifndef __SEQUENTIALREAD_H___
#define __SEQUENTIALREAD_H___

#include <ITestCase.h>


namespace NFSBenchmark {
namespace NTestCases {

class SequentialRead : public ITestCase {
 public:
  void Initialize(const std::string& aPath) override;
  void Run() override;
  void Report() override;
  bool IsAvailable(const Environment& aEnvironment) override;
};

}  // NTestCases
}  // NFSBenchmark
#endif  // __SEQUENTIALREAD_H___
