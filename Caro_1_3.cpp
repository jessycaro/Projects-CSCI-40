// This program will take a number and divide it by 2.

// Place your name here Jessy Caro

#include <iostream>
using namespace std;

int main()
{
	float number;
	int divider;

	divider = 2;

	cout << "Hi there" << endl;
	cout << "Please input a number and then hit return" << endl;
	cin >> number;

	number = number / divider;

	cout << "Half of your number is " << number << endl;

	return 0;
}

//when dividing 9 by 0 the result was inf (infinity), when dividing 9 by 2 the result was 4.5
//this is the correct output