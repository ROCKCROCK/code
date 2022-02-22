#include <iostream>
using namespace std;

class oc
{
private:
    static int c;

public:
    oc()
    {
        c++;
    }

    void display()
    {
        cout << "The number of objects created = " << c;
    }
};
int oc::c = 0;
int main()
{
    oc a;
    oc b;
    oc c;
    oc d;
    d.display();
    return 0;
}