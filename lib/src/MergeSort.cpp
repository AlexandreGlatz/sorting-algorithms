#include "MergeSort.h"

MergeSort::MergeSort()
	: SortingAlgorithm("Merge Sort")
{
}

MergeSort::~MergeSort()
{
}

void MergeSort::Sort(std::vector<int>& vector)
{
	MakeMergeSort(vector, 0, vector.size());
}

void MergeSort::MakeMergeSort(std::vector<int>& vector, int rangeBegin, int rangeEnd)
{
	if (rangeEnd - rangeBegin > 2)
	{
		MakeMergeSort(vector, rangeBegin, rangeEnd / 2);
	}
	
	for (int i = rangeBegin; i < rangeEnd - rangeBegin; ++i)
	{
		if (i + 1 >= vector.size())
			continue;

		if (vector[i] > vector[i + 1])
			Swap(vector, i, i + 1);
	}
}
