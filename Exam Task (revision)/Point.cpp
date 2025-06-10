#include "Point.h"
double Point::getX() { return x; }
double Point::getY(){ return y; }

double Point::getArea() { return 0.0; }
double Point::getPerimeter(){ return 0.0; }

double Point::getDistanceToOrigin(){
	return sqrt(x * x + y * y);
}

string Point::getType(){ return "Point"; }

string Point::toString() {
    string s = "";
    s += "Type: " + getType() + "\n";
    s += "Coordinates: (" + to_string(x) + ", " + to_string(y) + ")\n";
    s += "Distance to origin: " + to_string(getDistanceToOrigin()) + "\n";
    return s;
}
