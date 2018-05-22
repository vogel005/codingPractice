/*
John Vogel
Start: 5/18/2018
Last Modified: 5/18/2018
Prompt: Implement bubble sort
*/
#ifndef SORT_H
#define SORT_H
#include <iostream>
using namespace std; 

class sort
{
private: 
	int array[10] = { 20, 2, 3, 4, 70, 34, 1, 0, 90, 8 };
public:
	sort() = default;
	sort(int array_[]);
	~sort();

	void bubble(int arr[], int n); //bubble sort for an array
	void display(int arr[], int n);
	void sortProc(); 
};

#endif
