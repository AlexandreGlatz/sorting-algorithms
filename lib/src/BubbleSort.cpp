#include "BubbleSort.h"

BubbleSort::BubbleSort() : SortingAlgorithm("Bubble Sort")
{
}

BubbleSort::~BubbleSort()
{
}

void BubbleSort::Sort(std::vector<int>& vector)
{
	int size = vector.size();
	for (int i = 0; i < vector.size(); ++i)
	{
		for (int j = 0; j < size - 1; ++j)
		{
			if (vector[j] > vector[j + 1])
				Swap(vector, j, j + 1);
			m_steps++;
		}
		size--;
	}
}