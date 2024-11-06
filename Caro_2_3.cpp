
// PLACE YOUR NAME HERE Jessy Caro

#include <iostream>
using namespace std;

const double length = 8;
const double width = 3;

int main()
{

	

	float area;								// definition of area of a rectangle
	float perimeter;				// definition of perimeter 
	perimeter = length + length + width + width;	// computes perimeter
	area = length * width;							// computes area

	
	cout << "The area of the rectangle is: "<< area << endl;
	
	cout << "The perimeter of the rectangle is: "<< perimeter << endl; 

	return 0;
}
