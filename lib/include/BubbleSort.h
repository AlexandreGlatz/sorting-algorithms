#ifndef BUBBLE_SORT__H_
#define BUBBLE_SORT__H_

#include "SortingAlgorithm.h"

class BubbleSort : public SortingAlgorithm
{
public:
	BubbleSort();
	~BubbleSort();

	void Sort(std::vector<int>& vector) override;

};
#endif