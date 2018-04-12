/*
John Vogel
Start: 3/26/2018
End: 
Prompt: Find one of the most frequent integers in an array. 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

void mostFreq(int temp[], int size); //finds most frequent value in an array
void displayArr(int temp[], int size); //displays contents of array
void fillArr(int temp[], int size); //fills users array

int main() {

	int array[10] = { 16, 28, 10, 23, 1, 32, 32, 0, 1, 1 }; //static array 

	displayArr(array, 10);

	mostFreq(array, 10);

	int userArr[10]; //array that user fills

	fillArr(userArr, 10);
	displayArr(userArr, 10);
	mostFreq(userArr, 10);

	cin.ignore();
	cout << "Please press Enter to End Program. \n";
	cin.get();

	return 0;
}

void mostFreq(int temp[], int size){

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
	cout << "The one of the most frequent numbers in the array is: " << mostF << ", appearing " << cnt2 << " times.\n";
	return;
}


void displayArr(int temp[], int size) {

	for (int i = 0; i< size; i++) {
		cout << temp[i] << " ";
	}
	cout << "\n";

	return;
}

void fillArr(int temp[], int size) {

	cout << "Please type " << size << " numbers:\n";
	for (int i = 0; i < size; i++) {
		cout << "Array value " << i << ": ";
		cin >> temp[i];
	}
	cout << "\n";
	return;
}