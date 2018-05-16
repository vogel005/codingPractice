/*
John Vogel
Start: 5/10/2018
Last Modified: 5/16/2018
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
void tree::delNode(int _data) {

	node *temp = root;
	node *par = NULL;

	//if the node is the root

	//node is not the root

		//if _data == temp->data
		//traversal 
}

//display


void tree::remove(node *temp, node *par) {

	//case 1: no children
	if (temp->left == NULL && temp->right == NULL) {
		if (temp->data < par->data) {
			delete temp;
			par->left = NULL;
		}
		else {
			delete temp;
			par->right = NULL;
		}
		return;
	}

	//case 2: one child.
	//left
	else if (temp->left != NULL && temp->right == NULL) {
		par = temp;
		temp = temp->left;
		
		par->data = temp->data;
		if (temp->left != NULL) {
			par->left = temp->left;
			delete temp;
		}
		else {
			delete temp; 
			par->left = NULL;
		}
		return;
	}

	//right
	else if (temp->right != NULL && temp->left == NULL) {
		par = temp;
		temp = temp->right;

		par->data = temp->data;
		if (temp->right != NULL) {
			par->right = temp->right;
			delete temp;
		}
		else {
			delete temp;
			par->right = NULL;
		}
		return;
	}
	
	//case 3: two children
	else {
		int Mdata; //max data in left of subtree
		Mdata = leftMax(temp);
		temp->data = Mdata;
		return;
	}

}

int tree::leftMax(node *temp) {

	node *par = temp; //parent node
	temp = temp->left; 

	while (temp->right != NULL) {
		par = temp;
		temp = temp->right;
	}

	int _data = temp->data;
	remove(temp, par);

	return _data;
}

#endif