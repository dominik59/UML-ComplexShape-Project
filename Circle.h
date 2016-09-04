/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circle.h
 * Author: Dominik
 *
 * Created on 23 maj 2016, 18:36
 */
#include "Shape.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape{
public:
    Circle(int x_pos,int y_pos, int r);
    Circle(const Circle& orig);
    virtual ~Circle();
    void addVector(int x, int y);
    bool in(int x, int y);    
    bool onEdge(int x, int y);
private:
    
protected:
    int r;      
    


};

#endif /* CIRCLE_H */

