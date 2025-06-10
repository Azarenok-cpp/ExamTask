#pragma once
#include "Figure.h"
#include "Point.h"
class Line : public Figure
{
private:
	Point start, end;
public:
	Line(Point start, Point end) :start(start), end(end) {}

	Point getStartPoint();
	Point getEndPoint();

	double getLength();
	double getPerimeter() override;
	double getArea() override;
	double getDistanceToOrigin() override;

	string getType() override;
	string toString() override;

};

