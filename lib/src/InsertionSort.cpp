#include "InsertionSort.h"
#include <iostream>

InsertionSort::InsertionSort()
	: SortingAlgorithm("Insertion Sort")
{
}

InsertionSort::~InsertionSort()
{
}

void InsertionSort::Sort(std::vector<int>& vector)
{
	for (int i = 0; i < vector.size() - 1; ++i)
	{
		int index = 0;
		if (vector[i] > vector[i + 1])
		{
			index = i;
			Swap(vector, i, i + 1);
		}

		for (int j = index; j >= 0; j--)
		{
			if (j == 0)
			{
				m_steps++;
				continue;
			}
			if (vector[j] > vector[j - 1])
			{
				break;
			}
			Swap(vector, j, j - 1);
			m_steps++;
		}
	}
}

