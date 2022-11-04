#pragma once
#include "Triad.h"
class Triangle :
    public Triad
{
    public:
        Triangle();
        Triangle(float firstNum, float secondNum, float thirdNum);
        float squareAreaTriad();
        void cornerTriad();
        void Display();    
};