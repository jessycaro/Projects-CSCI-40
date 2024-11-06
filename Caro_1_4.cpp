// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

// Place your name here Jessy Caro

#include <iostream>
using namespace std;

int main()
{
	float firstNumber;
	float secondNumber;

	// Prompt user to enter the first number. 
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number. 
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;

	// Now we will swap the values. 
	firstNumber = secondNumber;
	secondNumber = firstNumber;

	// Output the values.
	cout << "After swapping, the values of the two numbers are "
		 << firstNumber << " and " << secondNumber << endl;

	return 0;
}

//after compiling the program and inputting the numers 1 and 5 it says this : You input the numbers as 1 and 5, After swapping, the values of the two numbers are 5 and 5
//this could be fixed by deleting the lines 30 and 31 and swapping the variables firstNumber and secondNumber in line 35