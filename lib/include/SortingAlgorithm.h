#ifndef SORTING_ALGORITHM__H_
#define SORTING_ALGORITHM__H_

#include <vector>
#include <string>

class SortingAlgorithm
{
public:
	SortingAlgorithm(std::string name);
	~SortingAlgorithm();

	virtual void Sort(std::vector<int>& vector) = 0;

	int GetSteps();
	void ResetSteps();
	std::string GetName();

protected:
	void Swap(std::vector<int>& vector, int index1, int index2);

protected:
	int m_steps;
	std::string m_name;

};

#endif