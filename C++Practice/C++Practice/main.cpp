/*
John Vogel

Main file for C++ Coding Practice
*/
#include <iostream>
#include "mostFreq.h"
using namespace std;



int main() {

	mostFreq freq;

	freq.processFreq();
	
	//cout << "Select what program to run: " << endl;
	//while loop and switch statement required to select which program to run

	cin.ignore();
	cout << "Please press Enter to End Program." << endl;
	cin.get();

	return 0;
}