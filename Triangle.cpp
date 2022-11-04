#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

Triangle::Triangle()
{
	a = 1;
	b = 1;
	c = 1;
}

Triangle::Triangle(float firstNum, float secondNum, float thirdNum)
{
	a = firstNum;
	b = secondNum;
	c = thirdNum;
}

float Triangle::squareAreaTriad()
{
	float p = a + b + c;
	float squareArea = sqrt(p * (p - a) * (p - b) * (p - c));
	return squareArea;
}

void Triangle::cornerTriad()
{

	if (a + b > c && a + c > b && b + c > a) {
		double firstCorner = cos((pow(a, 2) + pow(c, 2) - pow(b, 2)) / 2 * a * c);//a
		cout << "First corner 'a' is: " << firstCorner << endl;
		double secondCorner = cos((pow(a, 2) + pow(b, 2) - pow(c, 2)) / 2 * a * b);//b
		cout << "Second corner 'b' is: " << secondCorner << endl;
		double thirdCorner = cos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / 2 * c * b);//c
		cout << "Third corner 'c' is: " << thirdCorner << endl;
	}
	else {
		cout << "Try again!" << endl;
	}

}

void Triangle::Display()
{
	Triad::Display();
	cout << "Square area = " << squareAreaTriad() << endl;
	cout << "Corners of triangle = " << endl;
	cornerTriad();
}