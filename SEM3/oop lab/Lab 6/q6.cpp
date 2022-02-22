#include <iostream>
using namespace std;

class Shape
{
    double area;

public:
    Shape(double radius)
    {
        area = 3.14 * radius * radius;
    }
    Shape(int edge)
    {
        area = edge * edge;
    }
    Shape(int l, int b)
    {
        area = l * b;
    }
    Shape(double h, double b)
    {
        area = 0.5 * h * b;
    }
    void display()
    {
        cout << area<<endl;
    }
};
int main()
{
    Shape obj1 = *new Shape(10.0);
    Shape obj2 = *new Shape(15);
    Shape obj3 = *new Shape(10, 20);
    Shape obj4 = *new Shape(4,8);

    cout << "The area of circle is : ";
    obj1.display();
    cout << "The area of square is : ";
    obj2.display();
    cout << "The area of rectangle is : ";
    obj3.display();
    cout << "The area of triangle is : ";
    obj4.display();
    return 0;
}