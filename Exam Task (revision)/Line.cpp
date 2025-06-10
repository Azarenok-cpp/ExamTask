#include "Line.h"

Point Line::getStartPoint() { return start; }
Point Line::getEndPoint() { return end; }

double Line::getLength() {
	return sqrt(pow((start.getX() - end.getX()), 2)
		+ pow((start.getY() - end.getY()), 2));
}

double Line::getPerimeter() { return getLength(); }
double Line::getArea() { return 0.0; }

double Line::getDistanceToOrigin() {
	return min(start.getDistanceToOrigin(), end.getDistanceToOrigin());
}

string Line::getType() { return "Line"; }

string Line::toString() {
	string s = "";
	s += "Type: " + getType() + "\n";
	s += "Start point: (" + to_string(start.getX()) + ", " + to_string(start.getY()) + ")\n";
	s += "End point: (" + to_string(end.getX()) + ", " + to_string(end.getY()) + ")\n";
	s += "Length: " + to_string(getLength()) + "\n";
	s += "Perimeter: " + to_string(getPerimeter()) +"\n";
	s += "Distance to origin: " + to_string(getDistanceToOrigin()) + "\n";
	return s;
}
