#include <iostream>
using namespace std;
class add
{
    int a, b;
    friend void sum(add);

public:
    void in()
    {
        cout << "enter a->";
        cin >> a;
        cout << "enter b->";
        cin >> b;
    }
};
void sum(add c)
{
    c.in();
    int s;
    s = c.a + c.b;
    cout << "sum is->" << s << endl;
}
int main()
{
    add a;
    sum(a);
    return 0;
}