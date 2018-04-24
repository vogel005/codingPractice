/*
John Vogel
Last Modified: 4/23/2018
Main file for C++ Coding Practice
*/
#include <iostream>
#include "mostFreq.h"
using namespace std;

int main() {

	mostFreq freq;
	int choice;

	//do while & switch statement to choose which program to run. 
	do {
		cout << "\n1. mostFreq\n2. Exit\nSelect what program to run:" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			freq.processFreq();
			break;

		case 2:
			cout << "Goodbye!" << endl;
			break;

		default:
			cout << "Error: " << choice << "is an incorrect input. Try again." << endl;
		}
	} while (choice != 2);

	return 0;
}