/*
John Vogel
Start: 3/26/2018
End: 4/11/2018
Converted into class: 4/19/2018
Prompt: Find one of the most frequent integers in an array.
*/
#ifndef MOSTFREQ_H
#define MOSTFREQ_H
#include <iostream>
#include <cstdlib>
using namespace std;

class mostFreq
{
private:
	int array[10] = { 16, 28, 10, 23, 1, 32, 32, 0, 1, 1 }; //initial test array
	int userArr[10];

public:
	mostFreq() = default;
	mostFreq(int array_[], int userArr_[]);
	~mostFreq();
	void Freq(int temp[], int size); //finds most frequent value in an array
	void displayArr(int temp[], int size); //displays contents of array
	void fillArr(int temp[], int size); //fills users array
	void processFreq();
};

#endif