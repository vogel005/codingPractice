/*
John Vogel
Start: 4/26/2018
Last Modified: 4/27/2018
Prompt: Implement a stack with push and pop functions
*/
#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"

stack::stack()
{
	top = -1; //to indicate an empty stack
}


stack::~stack()
{
}

void stack::push(int temp) {

	if (top == MAX - 1) {
		cout << "Error: Stack is full" << endl;
		return;
	}
	else
	{
		top++;
		array[top] = temp; 
	}
	return;
}

int stack::pop() {

	int temp; //value to be popped from stack
	if (top == -1){
		cout << "Error: Stack is empty" << endl;
		return NULL;
	}
	else{
		temp = array[top];
		top--;
	}
	return temp;
}

void stack::displayAll() {
	if (top == -1){
		cout << "Stack is Empty." << endl;
	}
	else {
		cout << "Displaying stack: " << endl;
		for (int i = top; i >= 0; i--)
			cout << array[i] << endl;
	}
	return;
}

void stack::stackProcess() {
	displayAll();
	pop();
	push(1);
	push(2);
	push(3);
	push(34);
	push(565);

	displayAll();

	cout << "Popped the stack: " << pop() << endl;

	displayAll();
}

#endif