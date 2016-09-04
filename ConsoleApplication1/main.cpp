

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
    
	cs.addElement(10, 10, 5);
	cs.addElement(2, 2, 1, 1);
	cs1.addElement(15, 5, 3);
	cs1.addElement(15, 15, 3);
	cs1.addElement(0, 0, 1, 1);
	cs1.addElement(1, 1, 1, 1);
	cs1.addElement(2, 2, 1, 1);
	
	cs.addElement(cs1,0,0);	
	cs.paint_sum();
	
	CountingVisitor *cv = new CountingVisitor();
	cs.visit(cv);
	cv->show();

    return 0;
}

