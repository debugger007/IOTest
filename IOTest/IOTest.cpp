////////////////////////////////////////////////////////////////////////////////
//
// I/O Testing
//
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main()
{
	char ch;

	cout << "Line 1: Enter a string: ";
	cin.get(ch);
	cout << endl;

	cout << "Line 4: After first cin.get(ch); "
		<< "ch = " << ch << endl;

	cin.get(ch);
	cout << "Line 6: After second cin.get(ch); "
		<< "ch = " << ch << endl;

	cin.putback(ch);
	cin.get(ch);
	cout << "Line 9: After putback and then "
		<< "cin.get(ch); ch - " << ch << endl;

	ch = cin.peek();
	cout << "Line 11: After cin.peek(); ch = "
		<< ch << endl;

	cin.get(ch);
	cout << "Line 13: After cin.get(ch); ch = "
		<< ch << endl;

	cout << endl;

	//
	// Precision test
	//
	double radius = 12.67;
	double height = 12.00;

	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Precision = 2" << endl;
	cout << "radius = " << radius << endl;
	cout << "height = " << height << endl;
	cout << "volume = " << PI * radius * radius * height << endl;
	cout << endl << endl;

	cout << setprecision(3) << endl;
	cout << "Precision = 4" << endl;
	cout << "radius = " << radius << endl;
	cout << "height = " << height << endl;
	cout << "volume = " << PI * radius * radius * height << endl;
	cout << endl;

	cout << setprecision(4) << endl;
	cout << "Precision = 4" << endl;
	cout << "radius = " << radius << endl;
	cout << "height = " << height << endl;
	cout << "volume = " << PI * radius * radius * height << endl;
	cout << endl;

    return 0;
}

