/*
John Vogel
Last Modified: 4/23/2018
Main file for C++ Coding Practice
*/
#include <iostream>
#include "mostFreq.h"
#include "nonRepeating.h"
using namespace std;

int main() {

	mostFreq freq;
	nonRepeating rep;
	int choice =0;

	//do while & switch statement to choose which program to run. 
	do {
		cout << "\n1. Exit and end program\n2. mostFreq\n3. nonRepeating\nSelect what program to run:" << endl;
		cin >> choice;
		cout << endl; 

		switch (choice) {
		case 1: 
			cout << "Goodbye!" << endl;
			break;

		case 2:
			freq.processFreq();
			break;

		case 3:
			rep.processRepeat();
			break;

		default:
			cout << "Error: " << choice << " is an incorrect input. Try again." << endl;
		}
	} while (choice != 1);

	return 0;
}