#ifndef SELECTION_SORT__H_
#define SELECTION_SORT__H_

#include "SortingAlgorithm.h"
class SelectionSort : public SortingAlgorithm
{
public:
	SelectionSort();
	~SelectionSort();

	void Sort(std::vector<int>& vector) override;

private:

};


#endif