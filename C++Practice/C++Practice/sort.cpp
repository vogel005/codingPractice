/*
John Vogel
Start: 5/18/2018
Last Modified: 5/18/2018
Prompt: Implement bubble sort
*/
#ifndef SORT_CPP
#define SORT_CPP
#include "sort.h"

sort::sort()
{
}


sort::~sort()
{
}

void sort::bubble(int arr[], int n) {
	int temp;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i-1; j++) { //repeat n-1 times. 
			if (arr[j] > arr[j+1]) { //swap
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			//else, continue
		}
	}





}

#endif 