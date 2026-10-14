#ifndef NODE_H__
#define NODE_H__

struct Node
{
	Node(int _value);
	Node(int _value, Node* _pParent);
	void Sort();
	void DeleteLeaf();

	int value;
	Node* pLeftNode;
	Node* pRightNode;
	Node* pParent;
	Node* pRoot;

	static Node* pLastLeaf;

};

#endif