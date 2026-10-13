#include "SortingAlgorithm.h"

SortingAlgorithm::SortingAlgorithm(std::string name) 
	: m_name(name),
	m_steps(0)
{
}

SortingAlgorithm::~SortingAlgorithm()
{
}

void SortingAlgorithm::Swap(std::vector<int>& vector, int index1, int index2)
{
	int temp = vector[index1];
	vector[index1] = vector[index2];

	vector[index2] = temp;
}

void SortingAlgorithm::ResetSteps()
{
	m_steps = 0;
}

int SortingAlgorithm::GetSteps()
{
	return m_steps;
}

std::string SortingAlgorithm::GetName()
{
	return m_name;
}
