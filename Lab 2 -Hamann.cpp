// Project 1 -Hamann.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float A = 0;
	float B = 0;
	float X = 0;

	cout << "Tpday we are going to solve (Ax + b = 0)." << endl;
	cout << "Please enter a value for A: " << endl;
	cin >> A;

	cout << endl << "Please enter a value for B: " << endl;
	cin >> B;

	X = (0 - B) / A;

	cout << endl << "Calculating..." << endl;
	cout <<  "X=" << X << endl;
}