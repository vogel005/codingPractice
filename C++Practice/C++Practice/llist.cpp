/*
John Vogel
Start: 4/30/2018
Last Modified: 5/9/2018
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

	//if it's empty
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

	//if it's empty
	if (front == NULL & back == NULL) {
		cout << "List is empty, can't delete." << endl;
		return;
	}

	node *temp = new node;
	temp = front;
	front = front->next;
	delete temp; 

	if (front == NULL) //if the list has become empty due to the delete
		back = front; 
}

void llist::delEnd() {
	//if it's empty
	if (front == NULL & back == NULL) {
		cout << "List is empty, can't delete." << endl;
		return;
	}

	node *curr = new node;
	node *prev = new node;
	curr = front; 

	while (curr->next != NULL){
		prev = curr; 
		curr = curr->next;
	}

	back = prev;
	prev->next = NULL;
	delete curr; 

}

void llist::delPos(int pos){

	if(pos == 1){
		delStart();
		return;
	}

	node *curr = new node;
	node *prev = new node;

	curr = front;

	for (int i = 1; i < pos; i++) {
		prev = curr;
		curr = curr->next;
	}
	//delete curr; 
	prev->next = curr->next; //error
}

void llist::listDisplay() {
	//if it's empty
	if (front == NULL & back == NULL) {
		cout << "List is empty." << endl;
		return;
	}

	node *temp; //= new node;
	temp = front; 

	while (temp != NULL){
		cout << temp->data << " "; //error
		temp = temp->next;
	}
	cout << endl;
}

void llist::listProc() {
	int temp = 0;
	//need to test each function to see if it's working
	addStart(temp);
	/*
	temp = 23;
	addEnd(temp);
	temp = 54;
	addPos(2, temp);
	temp = 1;
	addStart(temp);
	*/
	listDisplay();
	/*
	delPos(3);
	delStart();
	delEnd();
	delStart();

	listDisplay();
	*/
}
#endif