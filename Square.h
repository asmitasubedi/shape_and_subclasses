#include<string>
#include"Rectangle.h"
using namespace std;

class Square : public Rectangle{

    public:
        Square();
        Square(double);
        Square(double,string, bool);

        void setSide(double);
        double getSide();
        void setWidth(double);
        void setLength(double);

        string toString();

};
