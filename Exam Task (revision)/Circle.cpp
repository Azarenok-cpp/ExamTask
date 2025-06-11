#include "Circle.h"


Point Circle::getCenter() { return center; }
double Circle::getRadius() { return radius; }

double Circle::getPerimeter() {
	return 2 * M_PI * radius;
}

double Circle::getArea() {
	return M_PI * radius * radius;
}

double Circle::getDistanceToOrigin() {
	return abs(center.getDistanceToOrigin() - radius);
}

string Circle::getType() { return "Circle"; }

string Circle::toString() {
	string s = "";
	s += "Type: " + getType() + "\n";
	s += "Center: (" + to_string(center.getX()) + ", " + to_string(center.getY()) + ")\n";
	s += "Area: " + to_string(getArea()) + "\n";
	s += "Perimeter: " + to_string(getPerimeter()) + "\n";
	s += "Distance to origin: " + to_string(getDistanceToOrigin()) + "\n";
	return s;
}