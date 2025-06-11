#pragma once
#include "math.h"
#define _USE_MATH_DEFINES
#include "string"
using namespace std;
class Figure
{
public:
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    virtual double getDistanceToOrigin() = 0;
    virtual string toString() = 0;
    virtual string getType() = 0;
};

