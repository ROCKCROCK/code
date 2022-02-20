#include <iostream>
using namespace std;

class Greater
{
    private:
    int x;
    public:
    void input()
    {
        cin>>x;
    }

   void max(Greater a)
    {
        if(x > a.x)
        {
           cout<<endl; 
           cout<<"greater value is->"<<x;
        }    
        else
        { 
           cout<<endl;  
           cout<<"greater value is->"<<a.x;
        }   
    }
};

int main()
{
    Greater a, b;
    cout<<"\nEnter the value for 1st object-> ";
    a.input();
    cout<<"\nEnter the value for 2nd object-> ";
    b.input();
    a.max(b);
   return 0;
}