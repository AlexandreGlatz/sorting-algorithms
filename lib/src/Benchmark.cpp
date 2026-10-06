#include "Benchmark.h"

Benchmark::Benchmark()
{
}

Benchmark::~Benchmark()
{
}

void Benchmark::CreateVectors()
{
	m_random100.resize(100);
	m_sorted100.resize(100);
	m_reversed100.resize(100);

	m_random1000.resize(1000);
	m_sorted1000.resize(1000);
	m_reversed1000.resize(1000);

	m_random10000.resize(10'000);
	m_sorted10000.resize(10'000);
	m_reversed10000.resize(10'000);

	m_random50000.resize(50'000);
	m_sorted50000.resize(50'000);
	m_reversed50000.resize(50'000);

	for (int i = 0; i < 100; ++i)
	{
		m_random100[i] = rand() % 100;
		m_sorted100[i] = i;
		m_reversed100[i] = 100 - (i + 1);
	}
}

void Benchmark::BenchmarkAlgorithm(PathfindingAlgorithm* pAlgorithm)
{
}

void Benchmark::PrintVector(std::vector<int> const& vector)
{
}
