/*
John Vogel
Start: 3/26/2018
Prompt: Find the most frequent integer in an array
*/
#include <iostream>
#include <cstdlib>
using namespace std;

//int mostFreq(int temp[], int size);
void displayArr(int temp[], int size);

int main() {

	int array[10] = { 16, 28, 10, 23, 1, 32, 32, 0, 1, 1 };

	displayArr(array, 10);
	cout << "Please press Enter. \n";
	cin.get();

	return 0;
}

/*int mostFreq(temp[a]){



}
*/

void displayArr(int temp[], int size) {

	for (int i = 0; i< size; i++) {
		cout << temp[i] << " ";
	}
	cout << "\n";

	return;
}