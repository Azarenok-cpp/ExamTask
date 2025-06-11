#include "ShapesEditor.h"

string ShapesEditor::toStringAllFigures(Figure** figures, int size) {
	if (!figures || size <= 0) {
		return "Error!";
	}

	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(i + 1) + ") ";
		s += figures[i]->toString() + "\n";

	}
	return s;

}
Figure* ShapesEditor::findClosestToOriginFigure(Figure** figures, int size){
	if (!figures || size <= 0) {
		return nullptr;
	}

	Figure* closest = figures[0];

	for (int i = 1; i < size; i++)
	{
		if (figures[i] && figures[i]->getDistanceToOrigin() < closest->getDistanceToOrigin()) {
			closest = figures[i];
		}
	}

	return closest;
}

Figure* ShapesEditor::findMostFarFromOriginFigure(Figure** figures, int size) {
	if (!figures || size <= 0) {
		return nullptr;
	}

	Figure* mostFar = figures[0];

	for (int i = 1; i < size; i++)
	{
		if (figures[i] && figures[i]->getDistanceToOrigin() > mostFar->getDistanceToOrigin()) {
			mostFar = figures[i];
		}
	}

	return mostFar;
}

Figure* ShapesEditor::findBiggestAreaFigure(Figure** figures, int size){
	if (!figures || size <= 0) {
		return nullptr;
	}

	Figure* biggest = figures[0];

	for (int i = 1; i < size; i++)
	{
		if (figures[i] && figures[i]->getArea() > biggest->getDistanceToOrigin()) {
			biggest = figures[i];
		}
	}

	return biggest;
}

Figure* ShapesEditor::findBiggestPerimeterFigure(Figure** figures, int size){
	if (!figures || size <= 0) {
		return nullptr;
	}

	Figure* biggest = figures[0];

	for (int i = 1; i < size; i++)
	{
		if (figures[i] && figures[i]->getPerimeter() > biggest->getPerimeter()) {
			biggest = figures[i];
		}
	}

	return biggest;
}

double ShapesEditor::calculateSumPerimeter(Figure** figures, int size){
	if (!figures || size <= 0) {
		return -1;
	}

	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += figures[i] ? figures[i]->getPerimeter() : 0;

	}

	return sum;
}
double ShapesEditor::calculateSumArea(Figure** figures, int size){
	if (!figures || size <= 0) {
		return -1;
	}

	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += figures[i] ? figures[i]->getArea() : 0;
	}

	return sum;
}

double ShapesEditor::calculateAvgArea(Figure** figures, int size) {
	return size > 0 && figures ? calculateSumArea(figures, size) / size : -1;
}
