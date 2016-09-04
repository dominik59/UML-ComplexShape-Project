#include "CountingVisitor.h"
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
	virtual void visit(CountingVisitor *cv);
	virtual void accept(CountingVisitor *cv);
private:

protected:
    int x_pos;
    int y_pos;
    
};

#endif /* SHAPE_H */

