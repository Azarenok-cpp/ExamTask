#pragma once
#include "Figure.h"
class Point : public Figure
{
private:
	double x, y;
public:
	Point() :x(0.0), y(0.0){}
	Point(double x, double y) :x(x), y(y) {}

	double getX();
	double getY();
	double getArea() override;
	double getPerimeter() override;
	double getDistanceToOrigin() override;

	string getType() override;
	string toString() override;
};

