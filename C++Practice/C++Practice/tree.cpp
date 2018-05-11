/*
John Vogel
Start: 5/10/2018
Last Modified: 5/11/2018
Prompt: Implement a BST with insert and delete functions
*/
#ifndef TREE_CPP
#define TREE_CPP
#include "tree.h"

tree::tree()
{
	root = NULL;
}

tree::~tree()
{
}

//insert
void tree::addNode(int _data) {
	node *n = new node; //n is new node being added to tree
	n->left = NULL;
	n->right = NULL;
	n->data = _data;

	if (root == NULL){
		root = n;
		return;
	}
	else {
		node *curr = new node; //current node 
		node *par = new node; //parent node
		curr = root; 

		while (curr != NULL) {
			if(n->data == curr->data){ //special case, data already exists in tree
				cout << "Error: Data already exists within the tree." << endl;
				return;
			}
			else if (n->data < curr->data) { //data is smaller than current node. moving to left of node
				par = curr; 
				curr = curr->left; 
			}
			else { //data is bigger than current node. moving to the right
				par = curr;
				curr = curr->right;
			}
		}
		//after reaching NULL
		if (n->data < par->data) {
			par->left = n; //parent's left points to new node
		}
		else {
			par->right = n; //parent's right points to new node
		}
	}



}

//delete
void tree::delNode() {

}

//display
#endif