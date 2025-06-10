#pragma once
#include "Figure.h"
#include "Point.h"
#include "Line.h"
class Triangle : public Figure
{
private:
	Point A, B, C;
	double sideAB, sideBC, sideAC; 
public:
	Triangle(Point A, Point B, Point C) : A(A), B(B), C(C){
		sideAB = Line(A, B).getLength();
		sideBC = Line(B, C).getLength();
		sideAC = Line(A, C).getLength();
	}

	double getPerimeter() override;
	double getArea() override;
	double getDistanceToOrigin() override;

	string getType() override;
	string toString() override;
};

