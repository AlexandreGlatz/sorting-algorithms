#ifndef QUICK_SORT__H_
#define QUICK_SORT__H_

#include "SortingAlgorithm.h"

class QuickSort : public SortingAlgorithm
{
public:
	QuickSort();
	~QuickSort();

	void Sort(std::vector<int>& vector) override;

private:
	void MakeQuickSort(std::vector<int>& vector, int pivotIndex, int start, int end);
};

#endif // !
