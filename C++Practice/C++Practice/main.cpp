/*
John Vogel
Last Modified: 5/17/2018
Main file for C++ Coding Practice
*/
#include <iostream>
#include "mostFreq.h"
#include "nonRepeating.h"
#include "stack.h"
#include "llist.h"
#include "tree.h"
using namespace std;

int main() {

	mostFreq freq;
	nonRepeating rep;
	stack stac;
	llist list; 
	tree bst;
	int choice =0;

	//do while & switch statement to choose which program to run. 
	do {
		cout << endl << "---C++ Coding Practice---" << endl << "1. Exit and end program" << endl << "2. mostFreq" << endl << "3. nonRepeating" << "4. stack" << "5. llist" << endl << "6. bst" << "Select what program to run: ";

		if (!(cin >> choice)){
			cin.clear(); //clears the error flag set by the cin
			cin.ignore(256, '\n'); //ignores until end of line, 256 arbitrarily set
			cout << "Error: Incorrect input, try again." << endl;
		}
		else {
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

			case 4: 
				stac.stackProcess();
				break;

			case 5: 
				list.listProc();
				break;
			case 6:
				bst.bstProc();
				break;
			default:
				cout << "Error: " << choice << " is an incorrect input. Try again." << endl;
				//no break as end of switch already
			}
		}
	} while (choice != 1);

	return 0;
}