#include<string>
#include"Shape.h"
using namespace std;

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Shape{
    private:
       double radius;


    public:
        Circle();
        Circle(double);
        Circle(double, string, bool);
        void setRadius(double );
        double getRadius();
        double getArea();
        double getPerimeter();
        string toString();
};
#endif

