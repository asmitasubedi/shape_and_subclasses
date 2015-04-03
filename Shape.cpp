#include<iostream>
#include<string>
#include"Shape.h"

using namespace std;

 Shape :: Shape()
{
    color = "green";
    filled = true;
}
Shape :: Shape(string shape_color, bool color_filled)
{
    setColor(shape_color);
    setFilled(color_filled);
}
void Shape :: setColor(string shape_color)
{
    color = shape_color;
}
string Shape :: getColor()
{
    return color;
}
void Shape :: setFilled(bool color_filled)
{
    filled = color_filled;
}
bool Shape :: isFilled()
{
    return filled;
}
string Shape :: toString()
{
    string text;
    text = (isFilled() ? "Filled" : "Not Filled");
    return "A Shape with color of " + getColor() + " and " + text;
}


