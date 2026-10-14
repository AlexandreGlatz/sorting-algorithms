#include "Node.h"

Node* Node::pLastLeaf = nullptr;
Node::Node(int _value)
	: value(_value),
	pLeftNode(nullptr),
	pRightNode(nullptr),
	pParent(nullptr),
	pRoot(nullptr)
{
}

Node::Node(int _value, Node* _pParent)
	: value(_value),
	pLeftNode(nullptr),
	pRightNode(nullptr),
	pParent(_pParent),
	pRoot(nullptr)
{
}

void Node::DeleteLeaf()
{
	if (pLeftNode != nullptr)
	{

		if (pLeftNode->pLeftNode == nullptr && pLeftNode->pRightNode == nullptr)
		{
			pRoot->value = pLeftNode->value;
			delete pLeftNode;
			pLeftNode = nullptr;
			return;
		}
	}

	if (pRightNode != nullptr)
	{
		if (pRightNode->pLeftNode == nullptr && pRightNode->pRightNode == nullptr)
		{
			pRoot->value = pRightNode->value;
			delete pRightNode;
			pRightNode = nullptr;
			return;
		}
	}
}

void Node::Sort()
{
	if (pLeftNode == nullptr && pRightNode == nullptr)
	{
		Node::pLastLeaf = this;
		return;
	}


	Node* biggestNode;
	if (pLeftNode == nullptr)
	{
		pRightNode->Sort();
		biggestNode = pRightNode;
	}
	
	else if (pRightNode == nullptr)
	{
		pLeftNode->Sort();
		biggestNode = pLeftNode;
	}

	else
	{
		pRightNode->Sort();
		pLeftNode->Sort();
		biggestNode = pLeftNode->value > pRightNode->value ? pLeftNode : pRightNode;
	}
	
	if (biggestNode->value > value)
	{
		int temp = value;
		value = biggestNode->value;
		biggestNode->value = temp;
	}
}