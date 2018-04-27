/*
John Vogel
Start: 4/26/2018
Last Modified: 4/26/2018
Prompt: Implement a stack with push and pop functions
*/
#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

const int MAX = 10; //max number of elements in the stack

class stack
{
private:
	int array[MAX]; //array for the stack
	int top; //top of the stack

public:
	stack();
	~stack();

	void push(int temp);
	int pop();


};

#endif