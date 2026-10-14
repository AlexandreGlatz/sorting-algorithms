#ifndef BENCHMARK__H_
#define BENCHMARK__H_

#include <vector>

class SortingAlgorithm;
class Benchmark
{
public:
	Benchmark();
	~Benchmark();

	void CreateVectors();
	void BenchmarkAlgorithm(SortingAlgorithm* pAlgorithm);
	void BenchmarkTime(SortingAlgorithm* pAlgorithm);

private:
	void PrintVector(std::vector<int> const& vector);

private:
	std::vector<int> m_random100;
	std::vector<int> m_sorted100;
	std::vector<int> m_reversed100;

	std::vector<int> m_random1000;
	std::vector<int> m_sorted1000;
	std::vector<int> m_reversed1000;

	std::vector<int> m_random10000;
	std::vector<int> m_sorted10000;
	std::vector<int> m_reversed10000;

	std::vector<int> m_random50000;
	std::vector<int> m_sorted50000;
	std::vector<int> m_reversed50000;

};

#endif