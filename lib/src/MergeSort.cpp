#include "MergeSort.h"
#include <iostream>
#include <queue>
#include <cmath>

MergeSort::MergeSort()
	: SortingAlgorithm("Merge Sort")
{
}

MergeSort::~MergeSort()
{
}

void MergeSort::Sort(std::vector<int>& vector)
{
	MakeMergeSort(vector, 0, vector.size() - 1);
}

//void MergeSort::MakeMergeSort(std::vector<int>& vector, int rangeBegin, int rangeEnd)
//{
//	if (rangeEnd - rangeBegin >= 2)
//	{
//		MakeMergeSort(vector, rangeBegin, rangeBegin + (rangeEnd - rangeBegin) / 2);
//        MakeMergeSort(vector, rangeBegin + rangeEnd / 2 + 1, rangeBegin + rangeEnd);
//	}
//
//	if (rangeBegin == rangeEnd)
//		return;
//
//	int leftBegin = rangeBegin;
//	int mid = leftBegin + (rangeEnd - rangeBegin) / 2 + 1;
//	int rightEnd = rangeEnd;
//
//	std::vector<int> left(vector.begin() + leftBegin, vector.begin() + mid);
//	std::vector<int> right(vector.begin() + mid, vector.begin() + rightEnd + 1);
//	std::vector<std::vector<int>> vectors = { left, right };
//
//	int indexLeft = 0;
//	int indexRight = 0;
//	int vectorToUse = 0;
//	int currentIndex = 0;
//
//	int k = rangeBegin;
//	while (indexRight < right.size() && indexLeft < left.size())
//	{
//		if (left[indexLeft] > right[indexRight])
//		{
//			vector[k] = right[indexRight];
//			indexRight++;
//			currentIndex = indexLeft;
//			vectorToUse = 0;
//			k++;
//			continue;
//		}
//		
//		vector[k] = left[indexLeft];
//		indexLeft++;
//		currentIndex = indexRight;
//		vectorToUse = 1;
//		k++;
//	}
//
//
//	for (int i = k; i <= rangeEnd; ++i)
//	{
//		vector[i] = vectors[vectorToUse][currentIndex];
//		currentIndex++;
//	}
//
//
//	for (int i = 0; i < vector.size(); ++i)
//	{
//		std::cout << vector[i]<<",";
//	}
//
//	std::cout << std::endl;
//}
void MergeSort::Merge(std::vector<int>& vector, int start, int mid, int end)
{
	int indexStart = start;
	int indexMid = mid + 1;

	int newIndex = 0;

	std::vector<int> temp(end - start + 1);
	while (indexStart <= mid && indexMid <= end)
	{
		if (vector[indexStart] < vector[indexMid])
		{
			temp[newIndex] = vector[indexStart];
			indexStart++;
		}
		else
		{
			temp[newIndex] = vector[indexMid];
			indexMid++;
		}
		m_steps++;
		newIndex++;
	}

	while (indexStart <= mid)
	{
		temp[newIndex] = vector[indexStart];
		newIndex++;
		indexStart++;
		m_steps++;
	}

	while (indexMid <= end)
	{
		temp[newIndex] = vector[indexMid];
		newIndex++;
		indexMid++;
		m_steps++;
	}

	for (int i = 0; i < temp.size(); ++i)
	{
		vector[start + i] = temp[i];
	}
}

void MergeSort::MakeMergeSort(std::vector<int>& vector, int rangeBegin, int rangeEnd)
{
	if (rangeEnd - rangeBegin + 1 == 1)
		return;

	m_steps++;
	if (rangeEnd - rangeBegin + 1 == 2)
	{
		if (vector[rangeBegin] > vector[rangeEnd])
		{
			Swap(vector, rangeBegin, rangeEnd);
		}
		return;
	}
	
	int mid = (rangeBegin + rangeEnd) / 2;

	MakeMergeSort(vector, rangeBegin, mid);
	MakeMergeSort(vector, mid + 1, rangeEnd);


	Merge(vector, rangeBegin, mid, rangeEnd);
}
