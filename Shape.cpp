/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.cpp
 * Author: Dominik
 * 
 * Created on 23 maj 2016, 18:35
 */
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


