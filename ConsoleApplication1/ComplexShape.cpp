


#include "Circle.h"
#include "Rectangle.h"
#include "CountingVisitor.h"
#include <iostream>
#include "ComplexShape.h"

using namespace std;
#define PAINTING_SPACE 50

Circle circle(5, 5, 5);
Rectangle rectangle(0, 0, 10, 10);
Rectangle rectangle1(0, 0, 10, 10);
//ComplexShape cs1(0, 0);


ComplexShape::ComplexShape(int x, int y) {
    this->x = x;
    this->y = y;	
	
//    circle.addVector(x, y);
//    rectangle.addVector(x, y);
//    il_figur = 2;
}

ComplexShape::ComplexShape(int x, int y, ComplexShape cs) {
    this->x = x;
    this->y = y;
//    circle.addVector(x, y);
//    rectangle.addVector(x, y);
//    rectangle1.addVector(x, y);
//    cs1 = cs;
//    il_figur = 3;
}

ComplexShape::~ComplexShape() {
}

bool ComplexShape::diff(int x, int y) {
//    if (il_figur == 2) {
//        if (circle.in(x, y) && !rectangle.in(x, y) || !circle.in(x, y) && !rectangle.in(x, y)) {
//            cout << "ComplexShape diff true" << endl;
//            return true;
//        } else {
//            cout << "ComplexShape diff false" << endl;
//            return false;
//        }
//    } else if (il_figur == 3) {
//        if (circle.in(x, y) && !rectangle.in(x, y) && !rectangle1.in(x, y) && !cs1.in(x, y) || !circle.in(x, y) && rectangle.in(x, y) && !rectangle1.in(x, y) && !cs1.in(x, y) || !circle.in(x, y) && !rectangle.in(x, y) && rectangle1.in(x, y) && !cs1.in(x, y) || !circle.in(x, y) && !rectangle.in(x, y) && !rectangle1.in(x, y) && cs1.in(x, y)) {
//            cout << "ComplexShape diff true" << endl;
//            return true;
//        }
//        else
//        {
//            cout << "ComplexShape diff false" << endl;
//            return false;
//        }
//    }
    bool contain = false;
    for(auto &i : this->shape_container)
    {
        if(i->in(x,y)&&contain==false)
        {
            
            contain=true;
        }
        else if(i->in(x,y)&&contain==true)
        {
            cout << "ComplexShape diff false" << endl;
            return false;
        }
        
    }
    cout << "ComplexShape diff true" << endl;
    return true;
    
}

bool ComplexShape::in(int x, int y) {
//    if (il_figur == 2) {
//        if (circle.in(x, y) && rectangle.in(x, y)) {
//            cout << "ComplexShape in true" << endl;
//            return true;
//        } else {
//            cout << "ComplexShape in false" << endl;
//            return false;
//        }
//    } else if (il_figur == 3) {
//        if (circle.in(x, y) && rectangle.in(x, y) && rectangle1.in(x, y) && cs1.in(x, y)) {
//            cout << "ComplexShape in true" << endl;
//            return true;
//        } else {
//            cout << "ComplexShape in false" << endl;
//            return false;
//        }
//    }
    bool contain = false;
    for(auto &i : this->shape_container)
    {
        if(i->onEdge(x,y))
        {
            contain=true;
        }
        //else if(!i->onEdge(x,y))
        //{
        //    //cout << "ComplexShape in false" << endl;
        //    return false;
        //}
        
    }
    
    if(contain==true)
    {
        //cout << "ComplexShape in true" << endl;
        return true;
    }
    else
    {
        //cout << "ComplexShape in false" << endl;
        return false;
    }
    

}

void ComplexShape::addVector(int x, int y) {
//    if (il_figur) {
//        this->x = x;
//        this->y = y;
//        circle.addVector(x, y);
//        rectangle.addVector(x, y);
//    } else {
//        this->x = x;
//        this->y = y;
//        circle.addVector(x, y);
//        rectangle.addVector(x, y);
//        rectangle1.addVector(x, y);
//        cs1.addVector(x, y);
//
//    }
    for(auto &i : this->shape_container)
    {
        i->addVector(x,y);
    }

}

void ComplexShape::addElement(int x, int y, int width, int height)//Rectangle
{
    Shape *temp = new Rectangle(x,y,width,height);
    this->shape_container.push_back(temp);
}

void ComplexShape::addElement(int x, int y, int r)//Circle
{
    Shape *temp = new Circle(x,y,r);
    this->shape_container.push_back(temp);
}

void ComplexShape::addElement(ComplexShape cs, int x, int y)//ComplexShape
{
	ComplexShape *temp = new ComplexShape(x,y);
    //temp->addVector(x,y);
	temp->shape_container = cs.shape_container;
    this->shape_container.push_back(temp);
}

void ComplexShape::visit(CountingVisitor *cv)
{
	this->accept(cv);
	for (int i = 0; i < shape_container.size(); i++)
	{
		shape_container.at(i)->visit(cv);
	}
}

void ComplexShape::accept(CountingVisitor *cv)
{
	cv->visit((std::string)typeid(this).name()+"\n");
}

void ComplexShape::paint_sum()
{
    cout<<endl;
    for(int y=0; y<PAINTING_SPACE;y++)
    {
        for(int x=0;x<PAINTING_SPACE;x++)
        {
            bool contain=false;
            for(auto &i:this->shape_container)
            {
                if(i->onEdge(x,y))
                {
                    contain=true;
                }
            }
            if(contain==true)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }
//            if(circle.onEdge(x,y)||rectangle.onEdge(x,y))
//            {
//                cout<<"#";
//            }
//            else
//            {
//                cout<<" ";
//            }      
        }
        cout<<endl;
        
        
    }
}

bool ComplexShape::onEdge(int x, int y)
{
	return this->in(x, y);
}

void ComplexShape::paint_diff()
{
    cout<<endl;
    for(int y=0; y<PAINTING_SPACE;y++)
    {
        for(int x=0;x<PAINTING_SPACE;x++)
        {
            bool contain=false;
            for(auto &i: this->shape_container)
            {
                if(i->onEdge(x,y)&&contain==false)
                {
                    contain=true;
                }
                else if(i->onEdge(x,y)&&contain==true)
                {
                    contain=false;
                    break;
                }
            }
            if(contain==true)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }
//            if(circle.onEdge(x,y)&&rectangle.onEdge(x,y))
//            {
//                cout<<"#";
//            }
//            else
//            {
//                cout<<" ";
//            }
           
        }
        cout<<endl;
        
        
    }
}
