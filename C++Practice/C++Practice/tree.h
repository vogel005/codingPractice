/*
John Vogel
Start: 5/10/2018
Last Modified: 5/11/2018
Prompt: Implement a BST with insert and delete functions
*/
#ifndef TREE_H
#define TREE_H
#include <iostream>
using namespace std;

struct node {
	int data;
	struct node* left;
	struct node* right;
};

class tree
{
private:
	node *root;
public:
	tree();
	~tree();

	void addNode(int _data); //insert new node to the tree
	void delNode(); //delete node from the tree

	//display
};

#endif