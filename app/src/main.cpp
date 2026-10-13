#include "SortingAlgorithm.h"
#include "BubbleSort.h"
#include "Benchmark.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"

#include <ctime>
#include <iostream>

int main(int argc, char* argv[])
{
	srand(404);
	SortingAlgorithm* pBubbleSort = new BubbleSort();
	SortingAlgorithm* pSelectionSort = new SelectionSort();
	SortingAlgorithm* pInsertionSort = new InsertionSort();
	SortingAlgorithm* pMergeSort = new MergeSort();

	Benchmark benchmark;

	benchmark.BenchmarkAlgorithm(pBubbleSort);
	benchmark.BenchmarkAlgorithm(pSelectionSort);
	benchmark.BenchmarkAlgorithm(pInsertionSort);
	//benchmark.BenchmarkAlgorithm(pMergeSort);

	std::vector<int> vector;
	vector.resize(10);

	for (int i = 0; i < vector.size(); ++i)
	{
		vector[i] = rand() % vector.size();
		std::cout << vector[i];
	}
	std::cout << std::endl;

	pMergeSort->Sort(vector);

	for (int i = 0; i < vector.size(); ++i)
	{
		std::cout << vector[i];
	}
	std::cout << std::endl;


}
