/*
John Vogel
Start: 3/26/2018
Last Modified: 4/24/2018
Prompt: Find one of the most frequent integers in an array. 
*/
#ifndef MOSTFREQ_CPP
#define MOSTFREQ_CPP
#include "mostFreq.h"

mostFreq::mostFreq(int array_[], int userArr_[])
{
	for (int i = 0; i < 10; i++)
		array[i] = array_[i];

	for (int i = 0; i < 10; i++)
		userArr[i] = userArr_[i];

}
mostFreq::~mostFreq()
{
}

void mostFreq::Freq(int temp[], int size) {

	int mostF = 0; //most frequent number
	int cnt1 = 0; //counts how many times a value shows up
	int cnt2 = 0; //highest amount counted for a single value
	for (int i = 0; i < size; i++) {
		for (int f = 0; f < size; f++) {
			if (temp[i] == temp[f]) {
				cnt1++;
			}
			if (cnt1 > cnt2) {
				mostF = temp[i];
				cnt2 = cnt1;
			}
			if (f == size - 1) {
				cnt1 = 0; //reset counter
			}
		}

	}
	cout << "The one of the most frequent numbers in the array is: " << mostF << ", appearing " << cnt2 << " times." << endl;
	return;
}


void mostFreq::displayArr(int temp[], int size) {

	cout << "Array: ";
	for (int i = 0; i< size; i++) {
		cout << temp[i] << " ";
	}
	cout << endl;

	return;
}

void mostFreq::fillArr(int temp[], int size) {

	cout << endl << "Please type " << size << " numbers:\n";
	for (int i = 0; i < size; i++) {
		cout << "Array value " << i << ": ";
		cin >> temp[i];
	}
	cout << endl;
	return;
}

void mostFreq::processFreq() {

	displayArr(array, 10);
	Freq(array, 10);
	fillArr(userArr, 10);
	displayArr(userArr, 10);
	Freq(userArr, 10);

	return;
}

#endif