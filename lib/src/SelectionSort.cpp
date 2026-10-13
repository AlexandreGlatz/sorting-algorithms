#include "SelectionSort.h"

SelectionSort::SelectionSort()
	: SortingAlgorithm("Selection Sort")
{
}

SelectionSort::~SelectionSort()
{
}

void SelectionSort::Sort(std::vector<int>& vector)
{
	for (int i = 0; i < vector.size(); ++i)
	{
		for (int j = 0; j < vector.size(); ++j)
		{
			if (vector[i] < vector[j])
			{
				Swap(vector, i, j);
			}
			m_steps++;
		}
	}
}
