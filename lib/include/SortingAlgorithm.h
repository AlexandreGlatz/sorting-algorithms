#ifndef SORTING_ALGORITHM__H_
#define SORTING_ALGORITHM__H_

#include <vector>

class SortingAlgorithm
{
public:
	SortingAlgorithm();
	~SortingAlgorithm();

	virtual void Sort(std::vector<int>& vector) = 0;

protected:
	void Swap(std::vector<int>& vector, int index1, int index2);

protected:
	int m_steps;
};

#endif