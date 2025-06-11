#pragma once
#include "Figure.h"
#include "Point.h"
#include "Line.h"

class Rectangle : public Figure
{
private:
	Point vertex; //left bottom vertex
	double width, height;

public:
	Rectangle(Point vertex, double width, double height) 
		: vertex(vertex), width(abs(width)), 
		height(abs(height)) {}

	double getPerimeter() override;
	double getArea() override;
	double getDistanceToOrigin() override;

	string getType() override;
	string toString() override;
};

