#include <iostream>
using namespace std;

void addByValue(int a, int b)
{
    int temp;
    temp = a+b;
    
    cout << "Call By Value"<<endl;

    cout << "After adding ="<< temp << endl;
    
}

void addByReference(int &a, int &b)
{
    int temp;
    temp = a+b;
    
   cout << "Call By Reference"<<endl;

    cout << "After adding  ="<< temp << endl;
    
}
void addByAddress(int *a, int *b)
{
    int temp;
    temp = *a+*b;
    
   cout << "Call By address"<<endl;

    cout << "After adding  ="<< temp << endl;
    
}


int main()
{
    int a, b;
    cout << "Enter Value of A::";
    cin >> a;
    cout << "Enter Value of B::";
    cin >> b;

    addByValue(a, b);
    addByReference(a, b);
    addByAddress(&a, &b);
}
