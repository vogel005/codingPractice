/*
John Vogel
Start: 4/30/2018
Last Modified: 5/2/2018
Prompt: Implement a linked list (with insert and delete functions)
*/
#ifndef LLIST_CPP
#define LLIST_CPP
#include "llist.h"

llist::llist()
{
	front = back = NULL;
}


llist::~llist()
{
}

//inserts
void llist::addStart(int _data) {
	//adds new node to front of list
	node *temp;
	temp = new node;
	temp->next = front;
	front = temp;
	front->data = _data;

	//if it's the first ever node added in, front and back need to point to it 
	if (front->next == NULL)
		back = temp; 

	return;
}

void llist::addEnd(int _data) {

	if (front == NULL & back == NULL){
		addStart(_data);
		return;
	}

	node *temp;
	temp = new node;
	temp->next = NULL;
	back = temp;
	back->data = _data;

	return;
}

/*
Inserting a new node in between two nodes, at a position given by user. 
Will be in between a previous and current node that steps through the list to find the position.
*/
void llist::addPos(int pos, int _data) {

	if (pos == 1)//if position is the start of list
	{
		addStart(_data);
		return;
	}

	node *prev = new node; //previous node
	node *curr = new node; //current node
	node *temp = new node; //new inserted node

	curr = front; 

	for (int i = 1; i < pos; i++)
	{
		prev = curr; 
		curr = curr->next;
	}
	temp->data = _data;
	prev->next = temp;
	temp->next = curr; 
}

//deletes
void llist::delStart() {

}

void llist::delEnd() {

}

void llist::delPos(){
}

void llist::listDisplay() {

}

void llist::listProc() {
	//int temp;

}
#endif