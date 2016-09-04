/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Shape.h
 * Author: Dominik
 *
 * Created on 23 maj 2016, 18:35
 */

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    Shape();
    Shape(const Shape& orig);
    virtual ~Shape();
    virtual bool in(int x,int y);
    virtual bool diff(int x, int y);
    virtual void addVector(int x, int y);
    virtual bool onEdge(int x, int y);
private:

protected:
    int x_pos;
    int y_pos;
    
};

#endif /* SHAPE_H */

