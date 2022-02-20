#include <iostream>
using namespace std;
class A
{
    int n;

public:
    void in()
    {
        cout << "Enter number->";
        cin >> n;
    }
    void out()
    {
        cout << "value of n is: " << n;
    }
    void friend operator-(A &a);
   
};
 void operator-(A &a)
    {
        a.n = -a.n;
    }
int main()
{
    A obj;
    obj.in();
    -obj;
    obj.out();
    cout << endl;
    return 0;
}