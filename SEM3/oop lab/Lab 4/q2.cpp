#include <iostream>
using namespace std;

class simpleInterest
{
    float p, t, r, interest;
    public:
        void principal()
        {
            cin>> p;
        }
        void Time()
        {
            cin>> t;
        }
        void Rate()
        {
            cin>> r;
        }
        float si()
        {
            return (p * r * t) / 100;
        }
};


int main()
{
    simpleInterest si;
    cout << "Enter Principal Amount : ";
    si.principal();
    cout << "Enter the Time : ";
    si.Time();
    cout << "Enter the rate : ";
    si.Rate();
    float interest = si.si();
    cout << "Interest = " << interest << endl;
    return 0;
}