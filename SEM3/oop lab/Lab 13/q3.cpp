#include <iostream>
using namespace std;
 
class A 
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class"<< " variable var_base ->" << var_base << endl;
    }
};
 
class B : public A 
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class"<< " variable var_base-> " << var_base << endl;
        cout << "Displaying Derived "<< " class variable var_derived-> "<< var_derived << endl;
    }
};
 
int main()
{
    A* a;
    A b;
    B c;

    a = &c;
 
    a->var_base = 23;
    a->display();

    a->var_base = 2132;
    a->display();
 
    B* d;
    d = &c;
    d->var_base = 3424;
    d->var_derived = 444;
    d->display();
    return 0;
}