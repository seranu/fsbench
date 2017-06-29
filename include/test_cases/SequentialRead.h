#ifndef __SEQUENTIALREAD_H___
#define __SEQUENTIALREAD_H___

namespace NFSBenchmark {
namespace NTestCases {

class SequentialRead : public ITestCase {
 public:
  void Initialize(const std::string& path) override;
  void Run() override;
  void Report() override;
  bool IsAvailable() override;
};

}  // NTestCases
}  // NFSBenchmark
#endif  // __SEQUENTIALREAD_H___
