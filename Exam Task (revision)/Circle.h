#pragma once
#include "Figure.h"
#include "Point.h"
class Circle : public Figure
{
private:
	Point center;
	double radius;
public:
	Circle(Point center, double radius) :center(center), 
		radius(radius > 0 ? radius : 0){};

	Point getCenter();
	double getRadius();

	double getPerimeter() override;
	double getArea() override;
	double getDistanceToOrigin() override;

	string getType() override;
	string toString() override;
};

