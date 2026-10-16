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

	std::vector<SortingAlgorithm*> sortingAlgorithms{ new BubbleSort(), new SelectionSort(), new InsertionSort(), new MergeSort(), new QuickSort(), new HeapSort() };

	Benchmark benchmark;

	benchmark.BenchmarkAlgorithmsTime(sortingAlgorithms);
}
