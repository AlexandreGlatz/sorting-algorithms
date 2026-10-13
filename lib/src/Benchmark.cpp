#include "Benchmark.h"
#include "SortingAlgorithm.h"

#include <iostream>

Benchmark::Benchmark()
{
	CreateVectors();
}

Benchmark::~Benchmark()
{
}

void Benchmark::CreateVectors()
{
	m_random100.resize(100);
	m_sorted100.resize(100);
	m_reversed100.resize(100);

	m_random1000.resize(1'000);
	m_sorted1000.resize(1'000);
	m_reversed1000.resize(1'000);

	m_random10000.resize(10'000);
	m_sorted10000.resize(10'000);
	m_reversed10000.resize(10'000);

	m_random50000.resize(50'000);
	m_sorted50000.resize(50'000);
	m_reversed50000.resize(50'000);

	for (int i = 0; i < 50'000; ++i)
	{
		if(i < 100)
		{ 
			m_random100[i] = rand() % 100;
			m_sorted100[i] = i;
			m_reversed100[i] = 100 - (i + 1);
		}

		if(i < 1000)
		{ 
			m_random1000[i] = rand() % 1000;
			m_sorted1000[i] = i;
			m_reversed1000[i] = 1000 - (i + 1);
		}

		if(i < 10'000)
		{ 
			m_random10000[i] = rand() % 10'000;
			m_sorted10000[i] = i;
			m_reversed10000[i] = 10'000 - (i + 1);
		}

 
		m_random50000[i] = rand() % 50'000;
		m_sorted50000[i] = i;
		m_reversed50000[i] = 50'000 - (i + 1);

	}
}

void Benchmark::BenchmarkAlgorithm(SortingAlgorithm* pAlgorithm)
{
	std::cout << "------------------------------------------------------" << std::endl;
	pAlgorithm->ResetSteps();
	std::cout << pAlgorithm->GetName() << " Sort For 100 :" << std::endl;

	std::vector<int> copy = m_random100;
	pAlgorithm->Sort(copy);

	std::cout << "\t Random values : " << std::endl;
	std::cout << "\t\t Starting Vector : "; PrintVector(m_random100);
	std::cout << "\t\t End vector : "; PrintVector(copy);
	std::cout << "\t\t Steps amount : " << pAlgorithm->GetSteps()<<std::endl<<std::endl;

	pAlgorithm->ResetSteps();

	copy = m_reversed100;
	pAlgorithm->Sort(copy);

	std::cout << "\t Reversed values : " <<std::endl;
	std::cout << "\t\t Starting Vector : "; PrintVector(m_reversed100);
	std::cout << "\t\t End vector : "; PrintVector(copy);
	std::cout << "\t\t Steps amount : " << pAlgorithm->GetSteps()<<std::endl<<std::endl;

	pAlgorithm->ResetSteps();

	copy = m_sorted100;
	pAlgorithm->Sort(copy);

	std::cout << "\t Sorted values : " << std::endl;
	std::cout << "\t\t Starting Vector : "; PrintVector(m_sorted100);
	std::cout << "\t\t End vector : "; PrintVector(copy);
	std::cout << "\t\t Steps amount : " << pAlgorithm->GetSteps()<<std::endl<<std::endl;

	pAlgorithm->ResetSteps();
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
