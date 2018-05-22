/*
John Vogel
Start: 5/18/2018
Last Modified: 5/18/2018
Prompt: Implement bubble sort
*/
#ifndef SORT_CPP
#define SORT_CPP
#include "sort.h"

sort::sort(int array_[])
{
	for (int i = 0; i < 10; i++)
		array[i] = array_[i];
}


sort::~sort()
{
}

void sort::bubble(int arr[], int n) {
	int temp;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) { //n-1 comparisons
			if (arr[j] > arr[j+1]) { //swap
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			//else, continue
		}
	}
}

void sort::display(int arr[], int n) {

	cout << "Array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sort::sortProc() {
	display(array, 10);
	cout << "Bubble sort." << endl;
	bubble(array, 10);
	display(array, 10);
}

#endif 