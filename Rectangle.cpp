
#include<iostream>
#include<string>
#include<sstream>
#include"Rectangle.h"

using namespace std;

Rectangle :: Rectangle()
{
    width = 1.0;
    length = 1.0;
}
Rectangle :: Rectangle(double Rec_Width, double Rec_Length)
{
    setWidth(Rec_Width);
    setLength(Rec_Length);
}
Rectangle :: Rectangle(double Rec_Width, double Rec_Length, string shape_color, bool color_filled): Shape(shape_color,color_filled)
{
    setWidth(Rec_Width);
    setLength(Rec_Length);
}
void Rectangle :: setWidth(double Rec_Width)
{
    width = Rec_Width;
}
double Rectangle :: getWidth()
{
    return width;
}
void Rectangle :: setLength(double Rec_Length)
{
    length = Rec_Length;
}
double Rectangle :: getLength()
{
    return length;
}
double Rectangle :: getArea()
{
    return getWidth()*getLength();
}
double Rectangle :: getPerimeter()
{
    return 2*(getLength()+getWidth());
}
string Rectangle::toString()
{
    stringstream length, width;
    length <<getLength();
    width <<getWidth();
    return "A Rectangle with width " + width.str()+ " and length " + length.str() +  " ,which is a subclass of " + Shape :: toString();
}
