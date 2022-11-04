/*Copyright (C) 2022 Huzieva Iyliia*/
#pragma once
class Triad
{
protected:
	float a;
	float b;
	float c;
public:
	Triad();
	Triad(float numOne, float numTwo, float numThree);
	virtual void Display();
	float sumOfTriad();
};