#include <iostream>
#include <vector>

#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Line.h"
#include "ShapesEditor.h"

int main() {
	/*
	Point a(5, 2);
	Point b(-3, 1);
	Point c(1, -3);

	Point d(-3, 5);
	Point e(-6, 2);

	Point f(3, 4);
	double width = 7, height = 4;

	Point o(-5, -3);
	double R = 2.5;


	Line line(d, e);

	Triangle triangle(a, b, c);

	Rectangle rectangle(f, width, height);

	Circle circle(o, R);

	 cout << a.toString()<<"\n\n";
	 cout << line.toString() << "\n\n";
	 cout << triangle.toString() << "\n\n";
	 cout << rectangle.toString() << "\n\n";
	 cout << circle.toString() << "\n\n";*/

	ShapesEditor editor;

	int size = 5;

	Figure** figures = new Figure * [size] {new Point(9, 9),
		new Circle(Point(2, 2), 3),
		new Rectangle(Point(4, 4), 5, 4),
		new Triangle(Point(1, 1), Point(-3, 0), Point(-1, -2)),
		new Line(Point(1, 4), Point(4, 0))};

	Figure* mostFarFigure = editor.findMostFarFromOriginFigure(figures, size);
	Figure* closestFigure = editor.findClosestToOriginFigure(figures, size);
	Figure* biggestPerimeterFigure 
		= editor.findBiggestPerimeterFigure(figures, size);
	Figure* biggestAreaFigure = editor.findBiggestAreaFigure(figures, size);
	double sumPerimeter = editor.calculateSumPerimeter(figures, size);
	double sumArea = editor.calculateSumArea(figures, size);
	double avgArea = editor.calculateAvgArea(figures, size);


	cout << "ToString:\n" << editor.toStringAllFigures(figures, size) << "\n\n";
	cout << "The most far from origin: " << mostFarFigure->getType() << "\n\n";
	cout << "The closest to origin: " << closestFigure->getType() << "\n\n";
	cout << "Biggest perimeter figure: " << biggestPerimeterFigure->getType()
		<< "\n\n";
	cout << "Biggest area figure: " << biggestAreaFigure->getType() << "\n\n";
	cout << "Sum perimeter: " << sumPerimeter << "\n\n";
	cout << "Sum area: " << sumArea << "\n\n";
	cout << "Average area: " << avgArea << "\n\n";


	/*cout << "\033[31m NULLPTR TESTS\033[0m " << endl;
	mostFarFigure = editor.findMostFarFromOriginFigure(nullptr, size);
	closestFigure = editor.findClosestToOriginFigure(nullptr, size);
	biggestPerimeterFigure = editor.findBiggestPerimeterFigure(nullptr, size);
	biggestAreaFigure = editor.findBiggestAreaFigure(nullptr, size);
	sumPerimeter = editor.calculateSumPerimeter(nullptr, size);
	sumArea = editor.calculateSumArea(nullptr, size);
	avgArea = editor.calculateAvgArea(nullptr, size);

	cout << "ToString:" << editor.toStringAllFigures(nullptr, size) << "\n\n";
	cout << "The most far from origin: "
		<< (mostFarFigure ? mostFarFigure->getType() : "Fool-proof")
		<< "\n\n";
	cout << "The closest to origin: "
		<< (closestFigure ? closestFigure->getType() : "Fool-proof")
		<< "\n\n";
	cout << "Biggest perimeter figure: "
		<< (biggestPerimeterFigure ? biggestPerimeterFigure->getType()
			: "Fool-proof") << "\n\n";
	cout << "Biggest area figure: "
		<< (biggestAreaFigure ? biggestAreaFigure->getType() : "Fool-proof")
		<< "\n\n";
	cout << "Sum perimeter: " << sumPerimeter << "\n\n";
	cout << "Sum area: " << sumArea << "\n\n";
	cout << "Average area: " << avgArea << "\n\n";
	

	cout << "\033[31m NEGATIVE SIZE TESTS\033[0m \n\n";
	size = -2;
	mostFarFigure = editor.findMostFarFromOriginFigure(figures, size);
	closestFigure = editor.findClosestToOriginFigure(figures, size);
	biggestPerimeterFigure = editor.findBiggestPerimeterFigure(figures, size);
	biggestAreaFigure = editor.findBiggestAreaFigure(figures, size);
	sumPerimeter = editor.calculateSumPerimeter(figures, size);
	sumArea = editor.calculateSumArea(figures, size);
	avgArea = editor.calculateAvgArea(figures, size);
	cout << "ToString:" << editor.toStringAllFigures(figures, size) << "\n\n";
	cout << "The most far from origin: "
		<< (mostFarFigure ? mostFarFigure->getType() : "Fool-proof")
		<< "\n\n";
	cout << "The closest to origin: "
		<< (closestFigure ? closestFigure->getType() : "Fool-proof")
		<< "\n\n";
	cout << "Biggest perimeter figure: "
		<< (biggestPerimeterFigure ? biggestPerimeterFigure->getType()
			: "Fool-proof") << "\n\n";
	cout << "Biggest area figure: "
		<< (biggestAreaFigure ? biggestAreaFigure->getType() : "Fool-proof")
		<< "\n\n";
	cout << "Sum perimeter: " << sumPerimeter << "\n\n";
	cout << "Sum area: " << sumArea << "\n\n";
	cout << "Average area: " << avgArea << "\n\n";*/
	

	return 0;
}
