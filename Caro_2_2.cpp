// This program will output the circumference and area
// of the circle with a given radius.

// PLACE YOUR NAME HERE Jessy Caro

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{

	

	float area;								// definition of area of circle 
	float circumference;				// definition of circumference 
	circumference = 2 * PI * RADIUS;	// computes circumference
	area = PI * RADIUS * RADIUS;							// computes area

	// Fill in the code for the cout statement that will output (with description)
	// the circumference
	cout << "The circumference of the cirlce is: "<< circumference << endl;
	// Fill in the code for the cout statement that will output (with description)
	// the area of the circle
	cout << "The area of the circle is: "<< area << endl;

	return 0;
}

//When you change the variable from int to float, the decimal gets cut off and rounded. 
//This is because int is used for precise values and float is used for decimal or more complex values.