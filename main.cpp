#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

void ShapeDetails(string &shapeColor, bool &shapeFill);
void CircleDetails(double &radius);
void RectangleDetails(double &length, double &width);
void SquareDetails(double &side);

int main()
{
    string shapeColor;
    bool shapeFill;
    double radius, length, width, side;
    int choice;

    cout << "\nConstructor with no arguments: \n";
    Shape shape1;
    cout << shape1.toString() << endl;

    ShapeDetails(shapeColor, shapeFill);
    cout << "\nConstructor with arguments :\n";
    Shape shape2(shapeColor, shapeFill);
	cout << shape2.toString();

	cout << "\n\n Enter your choice: \n Press 1 for Circle 2 for Rectangle and 3 for Square(1/2/3): ";
	cin >> choice;

	switch(choice)
	{
        case 1:
            {
            cout << "\n Default constructor: \n";
			Circle circle1;
			cout << "\n" <<  circle1.toString() << " of area " << circle1.getArea() << " and perimeter " << circle1.getPerimeter();

			cout << "\n\n Constructor with  single argument : \n";
			CircleDetails(radius);
			Circle circle2(radius);
			cout << "\n\n" << circle2.toString() << " of area " << circle2.getArea() << " and perimeter " << circle2.getPerimeter();


			cout << "\n\n Constructor with 3 arguments: radius, shapeColor and shapeFill \n";
			Circle circle3(radius, shapeColor, shapeFill);
			cout << "\n\n" << circle3.toString() << " of area " << circle3.getArea() << " and circumference " << circle3.getPerimeter();
            break;
            }

        case 2:
            {
            cout << "\n Default constructor: \n";
			Rectangle rect1;
			cout << "\n" << rect1.toString() << " of area " << rect1.getArea() << " and perimeter " << rect1.getPerimeter();

			cout << "\n\n Constructor with arguments length and breadth: \n";
			RectangleDetails(length, width);
			Rectangle rect2(length, width);
			cout << "\n\n" << rect2.toString() << " of area " << rect2.getArea() << " and perimeter " << rect2.getPerimeter();


			cout << "\n\n Constructor with 4 arguments length, breadth, shapeColor and shapeFill: \n";
			Rectangle rect3(length, width, shapeColor, shapeFill);
			cout << "\n\n" << rect3.toString() << " of area " << rect3.getArea() << " and perimeter " << rect3.getPerimeter();
            break;
            }
        case 3:
            {
            cout << "\n Default constructor: \n";
			Square square1;
			cout << "\n" << square1.toString() << " of area " << square1.getArea() << " and perimeter " << square1.getPerimeter();

			cout << "\n\n Constructor with an argument side: \n";
			SquareDetails(side);
			Square square2(side);
			cout << "\n\n" << square2.toString() << endl;


			cout << "\n\nConstructor with arguments side, shapeColor and shapeFill: \n";
			Square square3(side, shapeColor, shapeFill);
			cout << "\n\n" << square3.toString() << endl;
            break;
            }

        default:
            cout << "Invalid Choice";

	}

}

void ShapeDetails(string &shapeColor, bool &shapeFill)
{
    cout << "\nEnter color of shape: ";
	cin >> shapeColor;

	cout << "\n Is the shape filled? : 1 for true/0 for false) ";
	cin >> shapeFill;
}
void CircleDetails(double &radius)
{
	cout << "\n Enter radius of circle: ";
	cin >> radius;
}
void RectangleDetails(double &length, double &width)
{
	cout << "\n Enter length: ";
	cin >> length;

	cout << "\n Enter breadth: ";
	cin >> width;
}
void SquareDetails(double &side)
{
    cout << "\n Enter side of a Square: ";
    cin >> side;
}

