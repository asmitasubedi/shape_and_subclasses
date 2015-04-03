#include<iostream>
#include<string>
#include<sstream>
#include<math.h>
#include"Circle.h"
#define PI 3.14

using namespace std;

Circle :: Circle()
{
    radius = 1.0;
}
Circle :: Circle(double circle_radius)
{
    setRadius(circle_radius);

}
Circle :: Circle(double circle_radius, string shape_color, bool color_filled): Shape(shape_color,color_filled)
{
    setRadius(circle_radius);
}

void Circle :: setRadius(double circle_radius)
{
    radius = circle_radius;
}
double Circle :: getRadius()
{
    return radius;
}
double Circle:: getArea()
{
    return (pow(getRadius(),2)*PI );
}
double Circle :: getPerimeter()
{
    return (2*PI *getRadius());
}
string Circle :: toString()
{
    stringstream radius;
    radius << getRadius();
    return "A circle with radius " + radius.str() + " which is a subclass of " + Shape::toString();
}



