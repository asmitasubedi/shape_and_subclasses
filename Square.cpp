#include<iostream>
#include<sstream>
#include<string>
#include "Square.h"

using namespace std;

Square :: Square():Rectangle()
{

}
Square :: Square(double side):Rectangle(side, side)
{
    setSide(side);
}
Square :: Square( double side, string shape_color, bool color_filled): Rectangle( side, side, shape_color, color_filled)
{
    setSide(side);
}
void Square :: setSide(double side)
{
    Rectangle :: setLength(side);
}
double Square :: getSide()
{
    return Rectangle :: getLength();
}
void Square:: setWidth(double side)
{
    Rectangle::setWidth(side);
}
void Square :: setLength(double side)
{
    Rectangle :: setLength(side);
}
string Square :: toString()
{
    stringstream side;
    side << Rectangle::getWidth();
    return "A square with side= " + side.str() + " ,which is a subclass of " + Rectangle :: toString();
}

