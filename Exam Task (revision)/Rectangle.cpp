#include "Rectangle.h"
double Rectangle::getPerimeter() {
	return 2.0 * (width + height);
}
double Rectangle::getArea() {
	return width * height;
}
double Rectangle::getDistanceToOrigin(){
	double distanceVertex1 = vertex.getDistanceToOrigin();
	double distanceVertex2 = Point(vertex.getX(), vertex.getY() + height).getDistanceToOrigin();
	double distanceVertex3 = Point(vertex.getX() + width, vertex.getY() + height).getDistanceToOrigin();
	double distanceVertex4 = Point(vertex.getX() + width, vertex.getY()).getDistanceToOrigin();

	return min(min(distanceVertex1, distanceVertex2, distanceVertex3), distanceVertex4);
}			   
string Rectangle::getType() { return "Rectange"; }
string Rectangle::toString(){
	string s = "";
	s += "Type: " + getType() + "\n";
	s += "A vertex: (" + to_string(vertex.getX()) + ", " 
		+ to_string(vertex.getY()) + ")\n";
	s += "B vertex: (" + to_string(vertex.getX()) + ", " 
		+ to_string(vertex.getY() + height) + ")\n";
	s += "C vertex: (" + to_string(vertex.getX() + width) + ", " 
		+ to_string(vertex.getY() + height) + ")\n";
	s += "D vertex: (" + to_string(vertex.getX() + width) + ", "
		+ to_string(vertex.getY()) + ")\n";

	s += "Area: " + to_string(getArea()) + "\n";
	s += "Perimeter: " + to_string(getPerimeter()) + "\n";
	s += "Distance to origin: " + to_string(getDistanceToOrigin()) + "\n";
	return s;
}