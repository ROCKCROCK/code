#include<iostream>
using namespace std;
class areas
{

public:
int area(int l=5, int b=1)
{
    return(l*b);
}
float area1(float r=3)
{
    return(3.14*r*r);
}
float area2(float bs=2,float ht=1)
{
   return((bs*ht)/2);
}
};


int main()
{
    areas a;
   
    cout<<"\nArea of rectangle is "<<a.area();
    cout<<"\nArea of circle is "<<a.area1();
    cout<<"\nArea of triangle is "<<a.area2();
return 0;
}

