#include "QuickSort.h"

#include <iostream>
QuickSort::QuickSort()
	: SortingAlgorithm("Quick Sort")
{
}

QuickSort::~QuickSort()
{
}

void QuickSort::Sort(std::vector<int>& vector)
{
	MakeQuickSort(vector, vector.size() - 1, 0, vector.size() - 1);
}

void QuickSort::MakeQuickSort(std::vector<int>& vector, int pivotIndex, int start, int end)
{
	if (start >= end)
		return;

	int nextPivotIndex = start - 1;
	for (int i = start; i <= end; ++i)
	{
		if (vector[i] < vector[pivotIndex])
		{
			nextPivotIndex++;
			Swap(vector, i, nextPivotIndex);
		}
		m_steps++;
	}

	Swap(vector, pivotIndex, nextPivotIndex + 1);

	MakeQuickSort(vector, nextPivotIndex, start, nextPivotIndex);
	MakeQuickSort(vector, end, nextPivotIndex + 2, end);

}
