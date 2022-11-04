/*Copyright (C) 2022 Huzieva Iyliia*/
#include "Triad.h"
#include <iostream>

using namespace std;

Triad::Triad()
{
	a = 1;
	b = 1;
	c = 1;
}

Triad::Triad(float numOne, float numTwo, float numThree)
{
	a = numOne;
	b = numTwo;
	c = numThree;
}

void Triad::Display()
{
	cout << "Side one = " << a << endl;
	cout << "Side two = " << b << endl;
	cout << "Side three = " << c << endl;
	cout << "Sum of sides: " << sumOfTriad() << endl;
	cout << endl;
}

float Triad::sumOfTriad()
{
	return a + b + c;
}