#include "HeapSort.h"
#include "Node.h"

#include <queue>

HeapSort::HeapSort()
	: SortingAlgorithm("Heap Sort")
{
}

HeapSort::~HeapSort()
{
}

void HeapSort::Sort(std::vector<int>& vector)
{
	Node root(vector[0]);
	root.pRoot = &root;

	std::queue<Node*> nextNodes;
	nextNodes.push(&root);
	Node* pCurrentNode;

	for (int i = 0; i < vector.size(); i+=2)
	{
		pCurrentNode = nextNodes.front();
		nextNodes.pop();
		if (i + 1 < vector.size())
		{
			pCurrentNode->pLeftNode = new Node(vector[i + 1], pCurrentNode);
			pCurrentNode->pLeftNode->pRoot = &root;
			nextNodes.push(pCurrentNode->pLeftNode);
		}
		if (i + 2 < vector.size())
		{
			pCurrentNode->pRightNode = new Node(vector[i + 2], pCurrentNode);
			pCurrentNode->pRightNode->pRoot = &root;
			nextNodes.push(pCurrentNode->pRightNode);
		}
	}

	for (int i = vector.size() - 1; i >= 0; --i)
	{
		root.Sort();
		vector[i] = root.value;
		
		if(i > 0)
			Node::pLastLeaf->pParent->DeleteLeaf();
	}

}
