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
		: vertex(vertex), width(width > 0 ? width : 0), 
		height(height > 0 ? height : 0) {}

	double getPerimeter() override;
	double getArea() override;
	double getDistanceToOrigin() override;

	string getType() override;
	string toString() override;
};

