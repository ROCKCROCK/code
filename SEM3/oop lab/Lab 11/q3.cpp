#include <iostream>
using namespace std;

class A
{
        int a, b;
     public:
        void accept()
        {
                cout<<"Enter first Number->";
                cin>>a;
                cout<<"Enter second Number->"; 
                cin>>b;
        }
        void operator--() 
        {
                a--;
                b--;
        }
        void operator++()
        {
                a++;
                b++;
        }
        void display()
        {
                cout<<"\n A = "<<a;
                cout<<"\n B = "<<b;
        }
};
int main()
{
        A obj;
        obj.accept();
        --obj;
        cout<<"\nAfter Decrementing : ";
        obj.display();
        ++obj;
        ++obj;
        cout<<"\nAfter Incrementing : ";
        obj.display();
        return 0;
}