#include "SortingAlgorithm.h"
#include "BubbleSort.h"
#include "Benchmark.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"

#include <ctime>
#include <iostream>

int main(int argc, char* argv[])
{
	srand(404);
	SortingAlgorithm* pBubbleSort = new BubbleSort();
	SortingAlgorithm* pSelectionSort = new SelectionSort();
	SortingAlgorithm* pInsertionSort = new InsertionSort();
	SortingAlgorithm* pMergeSort = new MergeSort();
	SortingAlgorithm* pQuickSort = new QuickSort();
	SortingAlgorithm* pHeapSort = new HeapSort();

	Benchmark benchmark;

	benchmark.BenchmarkAlgorithm(pBubbleSort);
	benchmark.BenchmarkAlgorithm(pSelectionSort);
	benchmark.BenchmarkAlgorithm(pInsertionSort);
	benchmark.BenchmarkAlgorithm(pMergeSort);
	benchmark.BenchmarkAlgorithm(pQuickSort);
	benchmark.BenchmarkAlgorithm(pHeapSort);
	benchmark.BenchmarkTime(pHeapSort);
	
	

	//std::vector<int> vector;
	//vector.resize(10);

	//for (int i = 0; i < vector.size(); ++i)
	//{
	//	vector[i] = rand() % vector.size();
	//	std::cout << vector[i];
	//}
	//std::cout << std::endl;

	//std::vector<int> test{ 7,5,12,10,9,1 };
	//for (int i = 0; i < test.size(); ++i)
	//{
	//	std::cout << test[i]<<",";
	//}

	//std::cout << std::endl;

	//pQuickSort->Sort(vector);

	//for (int i = 0; i < vector.size(); ++i)
	//{
	//	std::cout << vector[i];
	//}
	//std::cout << std::endl;


}
