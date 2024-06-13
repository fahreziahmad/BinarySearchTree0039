#include <iostream>
#include<string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchid;
	Node* rightchild;

	//constructor for the node class
	Node(string i, Node * 1, Node* r)
	{
		info = i;
		leftchild = 1;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; //
	}

	void insert(string element) //
	{
		Node* newNode = new Node(element, Null, Null);
		newNode->info = element;
		newNode->leftchid = NULL;
		newNode->rightchild = NULL;

		Node* parent = NULL;
		Node* currentNode = NULL;

		if (parent == NULL)
		{
			ROOT = newNode;
			return;
		}

		if (element < parent->info)
		{
			parent->leftchid = newNode;
		}
		else if (element > parent->info)
		{
			parent->rightchild = newNode;
		}
	}



};



