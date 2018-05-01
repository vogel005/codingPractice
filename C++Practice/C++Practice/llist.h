/* 
John Vogel
Start: 5/30/2018
Last Modified: 5/30/2018
Prompt: Implement a linked list (with insert and delete functions)
*/
#ifndef LLIST_H
#define LLIST_H
#include <iostream>
using namespace std;

struct node
{
	int data; 
	node *next; 
};

class llist
{
protected:

public:
	llist();
	~llist();
};

#endif