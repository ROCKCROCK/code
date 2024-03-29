#include <iostream>
using namespace std;

class ABC
{
public:
    virtual void display()
    {
        cout << "\n In Base Class ABC\n";
    }
};
class BBC : public ABC
{
public:
    void display()
    {
        cout << "In Derived Class BBC\n";
    }
};
class KBC : public ABC
{
public:
    void display()
    {
        cout << "In Derived Class KBC\n";
    }
};
int main()
{
    ABC *ptr = new BBC;
    ptr->display();
    ptr = new KBC;
    ptr->display();
    return 0;
}
