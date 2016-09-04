
#include <iostream>
#include "Shape.h"

Shape::Shape() {
}

Shape::Shape(const Shape& orig) {
}

Shape::~Shape() {
}

bool Shape::in(int x, int y) {
	return true;
}

bool Shape::diff(int x, int y) {
	return true;
}

void Shape::addVector(int x, int y)
{
    
}

bool Shape::onEdge(int x, int y)
{
	return true;
}

void Shape::visit(CountingVisitor *cv)
{
}

void Shape::accept(CountingVisitor *cv)
{
}


