#include <iostream>
#include <vector>
#include "tester.h"
#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include "Line.h"


int main() {
    Point a(5, 2);
    Point b(-3, 1);
    Point c(1, -3);

    Point d(-3, 5);
    Point e(-6, 2);

    Point f(3, 4);
    double width = 7, height = 4;

    Point g(-5, -3);
    double R = 2.5;


    Line line(d, e);

    Triangle triangle(a, b, c);

    Rectangle rectangle(f, width, height);

    Circle circle(g, R);

    cout << a.toString()<<"\n\n";
    cout << line.toString() << "\n\n";
    cout << triangle.toString() << "\n\n";
    cout << rectangle.toString() << "\n\n";
    cout << circle.toString() << "\n\n";

    return 0;
}