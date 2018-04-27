/*
John Vogel
Last Modified: 4/25/2018
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
		
		if (!(cin >> choice)){
			cin.clear(); //clears the error flag set by the cin
			cin.ignore(256, '\n'); //ignores until end of line, 256 arbitrarily set
			cout << "Error: Incorrect input, try again." << endl;
		}
		else {
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
		}
	} while (choice != 1);

	return 0;
}