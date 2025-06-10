#pragma once
#include "math.h"
#include "string"
using namespace std;
class Figure
{
public:
	virtual double getArea();
	virtual double getPerimeter();
	virtual double getDistanceToOrigin();
	virtual string toString();
	virtual string getType();

};

