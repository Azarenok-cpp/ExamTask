#pragma once
#include "Figure.h"
class ShapesEditor
{
public:
	string toStringAllFigures(Figure** figures, int size);
	Figure* findClosestToOriginFigure(Figure** figures, int size);
	Figure* findMostFarFromOriginFigure(Figure** figures, int size);
	Figure* findBiggestAreaFigure(Figure** figures, int size);
	Figure* findBiggestPerimeterFigure(Figure** figures, int size);
	double calculateSumPerimeter(Figure** figures, int size);
	double calculateSumArea(Figure** figures, int size);
	double calculateAvgArea(Figure** figures, int size);

};

