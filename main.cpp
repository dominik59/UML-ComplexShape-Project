/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Dominik
 *
 * Created on 23 maj 2016, 18:34
 */

#include <cstdlib>
#include <iostream>
#include "ComplexShape.h"

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    ComplexShape cs(0,0);
	ComplexShape cs1(0, 0);
    /*cs.addElement(1,0,10,10);
    cs.addElement(10,10,5);
    cs.addElement(15,15,5);
    cs.in(1,1);
    cs.diff(1,1);
    cs.paint_sum();
    cs.paint_diff();*/
	cs.addElement(10, 10, 5);
	cs.addElement(2, 2, 1, 1);
	cs1.addElement(15, 5, 3);
	cs1.addElement(15, 15, 3);
	cs1.addElement(0, 0, 1, 1);
	cs1.addElement(1, 1, 1, 1);
	cs1.addElement(2, 2, 1, 1);
	/*cs.addElement(10, 10, 1, 1);
	cs.addElement(12, 12, 1, 1);*/
	//cs.addElement(15, 15, 3);
	cs.addElement(cs1,0,0);
	
	
	cs.paint_sum();
	//cs1.paint_sum();
//    ComplexShape cs1(2,2,cs);
//    cs1.diff(2,2);
//    cs1.paint_sum();
//    cs1.paint_diff();
    //system("pause");
    return 0;
}

