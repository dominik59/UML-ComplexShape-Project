

#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int x_pos, int y_pos, int width, int height) {
    this->x_pos=x_pos;
    this->y_pos=y_pos;
    this->width=width;
    this->height=height;
}

Rectangle::Rectangle(const Rectangle& orig) {
}

Rectangle::~Rectangle() {
}

bool Rectangle::in(int x, int y) {
    //cout<<this->x_pos <<this->y_pos << this->width<< this->width <<x<<y;
    if (this->x_pos <= x && this->y_pos <= y && this->width >= x && this->width >= y) {
        cout<<"Rectangle in true"<<endl;
        return true;
    }
    else
    {
        cout<<"Rectangle in false"<<endl;
        return false;
    }
}

void Rectangle::addVector(int x, int y)
{
    this->x_pos+=x;
    this->y_pos+=y;
}

bool Rectangle::onEdge(int x, int y)
{
    if(x>=x_pos&&x<=width+x_pos&&y>=y_pos&&y<=height+y_pos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Rectangle::visit(CountingVisitor *cv)
{
	this->accept(cv);
}

void Rectangle::accept(CountingVisitor *cv)
{
	cv->visit((std::string)typeid(this).name() + "wysokosc:" + std::to_string(this->height) + " szerokosc: " + std::to_string(this->width)+"\n");
}
