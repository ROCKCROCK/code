#include <iostream>
using namespace std;
void input()
{
    int a;
    cout << "Enter your age -> ";
    cin >> a;
    throw(a);
}
int main()
{
    try
    {
        input();
    }
    catch (int b)
    {
        if (b < 1)
        {
            cout << "Invalid age !";
        }
        if (b > 100)
        {
            cout << "Invalid age !";
        }
    }
  return 0;  
}