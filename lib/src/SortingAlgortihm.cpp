#include "SortingAlgorithm.h"

SortingAlgorithm::SortingAlgorithm()
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
