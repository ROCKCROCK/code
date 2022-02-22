#include <iostream>
using namespace std;

class Name 
{
    string *a,*b,*c;

public:

    Name()
    {
        a = new string;
        b = new string;
        c = new string;
        cout<<"Enter the first name -> ";
        cin>>*a;
        cout<<"Enter the last name -> ";
        cin>>*b;
        *c=*a+" "+*b;
        cout<<"The name is -> "<<*c<<endl;
    }
};

int main()
{
    Name obj = *new Name();
    return 0;
}