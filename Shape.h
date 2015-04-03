#include<string>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H
class Shape
{
    private:
        string color;
        bool filled;

    public:
        Shape();
        Shape(string, bool);
        void setColor(string );
        string getColor();
        void setFilled(bool);
        bool isFilled();
        string toString();
};
#endif
