/* 
John Vogel
Start: 4/30/2018
Last Modified: 5/8/2018
Prompt: Implement a linked list (with insert and delete functions)
*/
#ifndef LLIST_H
#define LLIST_H
#include <iostream>
using namespace std;

struct node
{
	int data; //data stored
	node *next; //points to next node
};

class llist
{
private:
	node *front; //front of list pointer
	node *back; //back of list pointer

public:
	llist();
	~llist();

	//insert
	void addStart(int _data); //insert start
	void addEnd(int _data); //insert end
	void addPos(int pos, int _data); //insert at position

	//delete
	void delStart(); //delete start 
	void delEnd(); //delete end
	void delPos(int pos); //delete at position 

	void listDisplay(); //displays all data in a list
	void listProc(); //will run the functions
};

#endif