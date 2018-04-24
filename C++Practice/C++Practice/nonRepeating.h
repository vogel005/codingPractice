/*
John Vogel
Start: 4/12/2018
Last Modified: 4/24/2018
Prompt: Find the first non-repeated character in a String.
*/
#ifndef NONREPEAT_H
#define NONREPEAT_H
#include <iostream>
#include <string>
using namespace std;

class nonRepeating
{
private:
	string myStr = "bbbbbbbbbbbabbbbbbbbbbbbbbbb"; //b repeating with a being first non-repeating character. 

public:
	nonRepeating(string myStr_);
	~nonRepeating();
	void Repeat();
	void processRepeat();
};

#endif