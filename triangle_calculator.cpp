#include <iostream>
#include "triangle.h"
using namespace std;

int main() {
	int a1, a2, a3;

	cout << "Enter Angle One: ";
	cin >> a1;
	cout << "\n";
	cout << "Enter Angle Two: ";
	cin >> a2;
	cout << "\n";
	cout << "Enter Angle Three: ";
	cin >> a3;
	
	triangle(a1, a2, a3);

	return 0;
}	
