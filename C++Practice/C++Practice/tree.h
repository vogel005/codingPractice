/*
John Vogel
Start: 5/10/2018
Last Modified: 5/17/2018
Prompt: Implement a BST with insert and delete functions
*/
#ifndef TREE_H
#define TREE_H
#include <iostream>
using namespace std;

class tree
{
private:
	struct node {
		int data;
		node* left;
		node* right;
	};
	node *root;

public:
	tree();
	~tree();

	void addNode(int _data); //insert new node to the tree
	void delNode(int _data); //delete node from the tree
	//display
	void preorderTrav(node *temp); //printing out the tree in preorder traversal
	//display 2D

	void bstProc(); //runs through the functions


protected:
	void remove(node *temp, node *par); //removes node knowing its parent. 
	int leftMax(node* temp); //finds the max in left-subtree and removes it

};

#endif