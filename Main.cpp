/*Copyright (C) 2022 Huzieva Iyliia*/
/*Створити клас Triad (трійка чисел); визначити методи зміни полів і обчислення суми чисел. 
Визначити похідний клас Triangle з полями-сторонами. Визначити методи обчислення кутів і площі трикутника.*/
#include "Triad.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main() {

	Triad side(17, 23, 4);
	side.Display();
	Triangle corner(25, 10, 9);
	corner.Display();
	system("PAUSE");
}
