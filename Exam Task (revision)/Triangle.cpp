#include "Triangle.h"

double Triangle::getPerimeter(){
	return sideAB + sideAC + sideBC;
}
double Triangle::getArea(){
	double p = getPerimeter() / 2.0;
	return sqrt(p * (p - sideAB) * (p - sideAC) * (p - sideBC));
}
double Triangle::getDistanceToOrigin(){
	return min(A.getDistanceToOrigin(), B.getDistanceToOrigin(), C.getDistanceToOrigin());
}

string Triangle::getType() { return "Triangle"; }
string Triangle::toString(){
	string s = "";
	s += "Type: " + getType() + "\n";
	s += "A vertex: (" + to_string(A.getX()) + ", " + to_string(A.getY()) + ")\n";
	s += "B vertex: (" + to_string(B.getX()) + ", " + to_string(B.getY()) + ")\n";
	s += "C vertex: (" + to_string(C.getX()) + ", " + to_string(C.getY()) + ")\n";
	s += "Area: " + to_string(getArea()) + "\n";
	s += "Perimeter: " + to_string(getPerimeter()) + "\n";
	s += "Distance to origin: " + to_string(getDistanceToOrigin()) + "\n";
	return s;
}