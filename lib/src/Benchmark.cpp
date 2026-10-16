#include "Benchmark.h"
#include "SortingAlgorithm.h"

#include <iostream>
#include <chrono>
#include <algorithm>
#include <iomanip>

using Clock = std::chrono::steady_clock;
Benchmark::Benchmark()
{
}

Benchmark::~Benchmark()
{
}


void Benchmark::BenchmarkAlgorithmsTime(std::vector<SortingAlgorithm*> algorithms)
{
	std::vector<int> sizes{ 100, 1000, 10000, 50000 };
	for (SortingAlgorithm* pAlgorithm : algorithms)
	{
		for (int const& currentSize : sizes)
		{
			BenchmarkTime(pAlgorithm, currentSize, LIST_TYPE::SORTED);
			BenchmarkTime(pAlgorithm, currentSize, LIST_TYPE::RANDOM);
			BenchmarkTime(pAlgorithm, currentSize, LIST_TYPE::REVERSED);
		}
		std::cout << std::endl;
	}
}

void Benchmark::PrintVector(std::vector<int> const& vector)
{
	std::cout << "[ ";
	for (int i = 0; i < vector.size() - 1; ++i)
	{
		std::cout << "" << vector[i] << ",";
	}
	std::cout << vector[vector.size()-1] << " ]" << std::endl;
}

void Benchmark::BenchmarkTime(SortingAlgorithm* pAlgorithm, int size, LIST_TYPE type)
{
	std::vector<int> toTest;
	std::string typeStr;
	switch (type)
	{
	case LIST_TYPE::RANDOM:
		toTest = CreateRandomVector(size);
		typeStr = "random";
		break;
	case LIST_TYPE::REVERSED:
		toTest = CreateReversedVector(size);
		typeStr = "reversed";
		break;
	case LIST_TYPE::SORTED:
		toTest = CreateSortedVector(size);
		typeStr = "sorted";
		break;
	}

	auto start{ Clock::now() };

	pAlgorithm->Sort(toTest);
	auto finish{ Clock::now() };
	std::chrono::duration<double> seconds{ finish - start };
	std::cout << "For " << size << " elements, on a "<<typeStr<<" list.\t Time for " << pAlgorithm->GetName() << " algorithm : " << std::setiosflags(std::ios_base::fixed) << std::setprecision(5) << seconds.count() <<"s"<<  std::endl;
}

std::vector<int> Benchmark::CreateRandomVector(int size)
{
	std::vector<int> ret(size);
	for (int i = 0; i < size; ++i)
	{
		ret[i] = rand() % 1000;
	}

	return ret;
}


std::vector<int> Benchmark::CreateSortedVector(int size)
{
	std::vector<int> ret(size);
	for (int i = 0; i < size; ++i)
	{
		ret[i] = i;
	}

	return ret;
}

std::vector<int> Benchmark::CreateReversedVector(int size)
{
	std::vector<int> ret(size);
	for (int i = size - 1; i >= 0; --i)
	{
		ret[i] = i;
	}

	return ret;
}
