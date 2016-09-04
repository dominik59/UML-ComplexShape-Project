/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: Dominik
 *
 * Created on 23 maj 2016, 18:36
 */
#include <math.h>
#include "Shape.h"
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Shape{
public:
    Rectangle(int x_pos, int y_pos, int width, int height);
    Rectangle(const Rectangle& orig);
    virtual ~Rectangle();
    void addVector(int x, int y);
    virtual bool in(int x, int y);
    bool onEdge(int x, int y);
private:
    
protected:
    int width;
    int height;
    

};

#endif /* RECTANGLE_H */

