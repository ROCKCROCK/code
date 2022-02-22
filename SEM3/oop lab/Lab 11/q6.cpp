#include <iostream>
#include <conio.h>

using namespace std;
class String
{
public:
    string s;

    void in(String &c1)
    {
    cout << "\nEnter the first string : ";
    cin >> s;
    cout << "\nEnter the second string : ";
    cin >> c1.s;
    }
    String operator+(String &c1)
    {
        String s1;
        s1.s = s + " " + c1.s;
        return s1;
    }

    void display()
    {
        cout << "The  string is : " << s << endl;
    }
};

int main()
{
    String a, b, c;
   a.in(b);
    c = a + b;
    c.display();
    return 0;
}