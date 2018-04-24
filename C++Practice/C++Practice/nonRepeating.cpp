/*
John Vogel
Start: 4/12/2018
Last Modified: 4/24/2018
Prompt: Find the first non-repeated character in a String.
*/
#ifndef NONREPEAT_CPP
#define NONREPEAT_CPP
#include "nonRepeating.h"

nonRepeating::nonRepeating(string myStr_)
{
	myStr = myStr_;
}


nonRepeating::~nonRepeating()
{
}

void nonRepeating::Repeat(string temp) {
	char prev; //previous character in string
	char curr; //current character in string

	prev = temp[0];

	for (int i = 1; i < temp.length(); i++) {
		curr = temp[i];

		if (prev != curr) {
			cout << "The first nonrepeated character is: " << curr << ", at position " << i+1 << "." << endl; //adding +1 as we are starting i at 1 instead of 0.
			return;
		}
		else
			prev = curr; 
	}

	cout << "All the characters are repeated." << endl;
	return;
}

void nonRepeating::processRepeat(){

	cout << "String: " << myStr << endl;
	Repeat(myStr);

	return; 
}

#endif