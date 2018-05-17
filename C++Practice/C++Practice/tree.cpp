/*
John Vogel
Start: 5/10/2018
Last Modified: 5/17/2018
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
	if ((_data == root->data) && (root->left == NULL) && (root->right == NULL)) { //case1: if the root is the only node in the tree
		delete root; 
		root = NULL;

		return;
	}

	else if ((root->left != NULL && root->right == NULL) || (root->right != NULL && root->left == NULL)) { //case2: if the root has one child
		if (root->left != NULL && root->right == NULL)
			temp = temp->left;
		else
			temp = temp->right;

		delete root;
		root = temp;

		return;
	}


	//node is not the root or root has 2 children atleast
	temp = root;

	while (temp != NULL) {
		if (_data == temp->data) { //found the number and removing it
			remove(temp, par);
			return;
		}

		else if (_data < temp->data) { //traverse left
			par = temp;
			temp = temp->left;
		}
		else { //traverse right
			par = temp;
			temp = temp->right;
		}

	}
	//key was not found 
}

void tree::preorderTrav(node *temp) {

	if (temp != NULL) {
		cout << temp->data << " "; 
		preorderTrav(temp->left);
		preorderTrav(temp->right);
	}
	cout << endl;
}


void tree::bstProc() {
	//empty tree
	preorderTrav(root); 
	/*
	//add to tree
	addNode(3);
	addNode(5);
	addNode(2);
	addNode(7);
	addNode(2);
	addNode(23);

	preorderTrav(root);

	//delete some of tree

	delNode(3);
	delNode(7);
	delNode(2);

	preorderTrav(root);
	*/
}

//protected
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

	while (temp->right != NULL) { //traversal
		par = temp;
		temp = temp->right;
	}

	int _data = temp->data;
	remove(temp, par);

	return _data;
}

#endif