#include <iostream>
using namespace std;
void area(float r)
{
    float ar;
    ar = 3.14 * r * r;
    cout << "area of circle is->" << ar << endl;
}
void area(int a, int b)
{
    int ar;
    ar = a * b;
    cout << "area of rectangle is->" << ar << endl;
}
void area(int a)
{
    int ar;
    ar = a * a;
    cout << "area of square is->" << ar << endl;
}
void area(float a, float b)
{
    float ar;
    ar = 0.5 * a * b;
    cout << "area of triangle is->" << ar << endl;
}
int main()
{
    int a, b, c;
    float d,e, f;
    cout << "enter radius->";
    cin >> e;
    cout << "enter length of rectangle->";
    cin >> a;
    cout << "enter breadth of rectangle ->";
    cin >> b;
    cout << "enter side of square->";
    cin >> c;
    cout << "enter base of triangle->";
    cin >> d;
    cout << "enter height of triangle->";
    cin >> f;
    area(e);
    area(a, b);
    area(c);
    area(d, f);
    return 0;
}