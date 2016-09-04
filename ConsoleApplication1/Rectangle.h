
#include <math.h>
#include "Shape.h"
#include "CountingVisitor.h"
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
	virtual void visit(CountingVisitor *cv);
	virtual void accept(CountingVisitor *cv);
private:
    
protected:
    int width;
    int height;
    

};

#endif /* RECTANGLE_H */

