#ifndef HEAP_SORT__H_
#define HEAP_SORT__H_

#include "SortingAlgorithm.h"

class HeapSort : public SortingAlgorithm
{
public:
	HeapSort();
	~HeapSort();

	void Sort(std::vector<int>& vector) override;

};

#endif