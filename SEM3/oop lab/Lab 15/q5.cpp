#include <iostream>
using namespace std;
#define size 5
template <class T1,class T2>
class stack
{   T1 x;
    T2 y;
    public:
    void push()
    {
        cout<<"Enter 1st number-> ";
        cin>>x;
        cout<<"Enter 2nd number-> ";
        cin>>y;
    }
    void display();
};
template<class T1 , class T2 > 
void stack <T1,T2> ::display()
{
   cout<<endl;
   cout<<"1st number-> "<<x<<endl;
   cout<<"2nd number-> "<<y<<endl;
}
int main()
{
    stack <int,int> x;
    x.push();
    x.display();
    return 0;
}