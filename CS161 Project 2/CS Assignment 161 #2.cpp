// Brandan Tyler Lasley
// Sources: None
// 10/6/2013 20:44
// This program checks and tests for a magic square.

#include <iostream>
#include <string>
using namespace std;

int main () {
	// Declare Varibles 
	int square[16];

	cout << "Welcome to Brandan's Magic Square Checker!" << endl << endl;
	cout << "Please enter a magic square! Do NOT exceed 16 (ex. 1 2 3 4 5 6... etc)" << endl;

	// Begain square collection loop.
	int i = 0;
	do {
		/* Delete this if you want a more user friendly approach. 
		cout << "Please enter a number [" << i + 1 << "\\16]  ";*/

		cin >> square[i];
		i++;
	} while (i < 16);

	// Calcuate and declare calcuation varibles 1
	int sum_r1 = 0;
	int sum_r2 = 0;
	int sum_r3 = 0;
	int sum_r4 = 0;
	int i2 = 0;

	// Loop array and calcuate
	for each(int sqr in square) {
		if (i2 < 4) {
			sum_r1 = sum_r1 + sqr;
		} else if (i2 < 8) {
			sum_r2 = sum_r2 + sqr;
		} else if (i2 < 12) {
			sum_r3 = sum_r3 + sqr;
		} else if (i2 < 16) { 
			sum_r4 = sum_r4 + sqr;
		}
		i2++;
	}
	

	// Check if square or not. 
	if (sum_r1 == sum_r2 && sum_r2 == sum_r3 && sum_r3 == sum_r4 && sum_r1) {
		cout << endl << "Magic Square!" << endl;
	} else {
		cout << endl << "This is NOT a magic square!!" << endl;
	}


	// Exit footer
	getchar();
	getchar();
	return 0;
}