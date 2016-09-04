
#include "Shape.h"
#include "CountingVisitor.h"
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
	virtual void visit(CountingVisitor *cv);
	virtual void accept(CountingVisitor *cv);
private:
    
protected:
    int r;      
    


};

#endif /* CIRCLE_H */

