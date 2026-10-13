#ifndef INSERTION_SORT__H_
#define INSERTION_SORT__H_

#include "SortingAlgorithm.h"

class InsertionSort : public SortingAlgorithm
{
public:
	InsertionSort();
	~InsertionSort();

	void Sort(std::vector<int>& vector) override;
};

#endif