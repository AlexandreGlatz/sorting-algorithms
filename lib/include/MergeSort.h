#ifndef MERGE_SORT__H_
#define MERGE_SORT__H_

#include "SortingAlgorithm.h"

class MergeSort : public SortingAlgorithm
{
public:
	MergeSort();
	~MergeSort();

	void Sort(std::vector<int>& vector) override;

private:
	void MakeMergeSort(std::vector<int>& subvector, int rangeBegin, int rangeEnd);
	void Merge(std::vector<int>& vector, int start, int mid, int end);
};

#endif