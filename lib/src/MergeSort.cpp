#include "MergeSort.h"
#include <iostream>
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
        MakeMergeSort(vector, rangeBegin + rangeEnd / 2, rangeEnd);
	}

	for (int i = rangeBegin; i < rangeEnd / 2; ++i)
	{
        for(int j = rangeBegin + rangeEnd / 2; j<rangeEnd; ++j)
        {
            m_steps++;
            if(vector[i] > vector[j])
            {
                Swap(vector, i, j);
                break;
            }

        }
	}

	for (int i = 0; i < vector.size(); ++i)
	{
		std::cout << vector[i];
	}

	std::cout << std::endl;
}
