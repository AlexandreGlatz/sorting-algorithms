#include "SortingAlgorithm.h"
#include "BubbleSort.h"

#include <ctime>
#include <iostream>

int main(int argc, char* argv[])
{
	srand(404);
	SortingAlgorithm* pAlgorithm = new BubbleSort();

	std::vector<int> vector;
	vector.resize(10);

	for (int i = 0; i < vector.size(); ++i)
	{
		vector[i] = rand() % vector.size();
		std::cout << vector[i];
	}
	std::cout << std::endl;

	pAlgorithm->Sort(vector);

	for (int i = 0; i < vector.size(); ++i)
	{
		std::cout << vector[i];
	}
	std::cout << std::endl;


}
