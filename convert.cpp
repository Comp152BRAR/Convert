#include <iostream>

using namespace std;

int main()
{
	//All variables defined
	char degree;
	float temp;

	//User Input
	cout << "*** Conversion	                               ***" << endl;
	cout << "Enter original temperature:" << endl;
	cin >> temp >> degree;
	cout << "**************************************************" << endl;

	//Convert from Fahrenheit to Celcius
	temp = (((temp -32)*5)/9);
	degree = 'C';

	//Output
	cout << "Converted temperature:" << endl;
	cout << temp << " " << degree << endl;
	cout << "**************************************************" << endl;

	//End Program
	return 0;
	}
}
