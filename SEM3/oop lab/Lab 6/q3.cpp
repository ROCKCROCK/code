#include <iostream>
using namespace std;

class add
{
    public:
    int x, y, total;

    add(int a, int b)
    {
        x = a;
        y = b;
        total =0;        
    }

    add(add &ob)
     {
        x = ob.x;
        y = ob.y;
        
     }
    void sum()
    {
        total = x + y;
        cout<<"\nSum : "<<total;
    }
};

int main(void)
{
    add ob1(10, 20);
    add ob2(ob1);
    ob1.sum();
    ob2.sum();
}