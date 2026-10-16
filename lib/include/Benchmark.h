#ifndef BENCHMARK__H_
#define BENCHMARK__H_

#include <vector>

enum LIST_TYPE
{
	RANDOM,
	SORTED,
	REVERSED
};

class SortingAlgorithm;
class Benchmark
{
public:
	Benchmark();
	~Benchmark();

	void BenchmarkAlgorithm(SortingAlgorithm* pAlgorithm);
	void BenchmarkTime(SortingAlgorithm* pAlgorithm, int size, LIST_TYPE type);
	void BenchmarkAlgorithmsTime(std::vector<SortingAlgorithm*> algorithms);

private:
	std::vector<int> CreateRandomVector(int size);
	std::vector<int> CreateSortedVector(int size);
	std::vector<int> CreateReversedVector(int size);

	void PrintVector(std::vector<int> const& vector);
};

#endif