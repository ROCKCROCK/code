#include<iostream>
using namespace std;
void arm()
{
    int i,a=100,b,c=0,d=0;
    while(a!=1000)
    {  int sum=0;
       for(i=a;i!=0;i=i/10)
       {
        b=i%10;
        sum=sum+(b*b*b);
       }
      if(sum==a)
      {
        cout<<a<<" is a amstrong no."<<endl;
        c++;
      }  
      else
      {
          d++;
      }
      a=a+1;
    }
cout<<"total no. of armstrong- "<<c<<endl;
cout<<"total no. of non-armstrong no.- "<<d<<endl;
}
int main()
{
    arm();
   return 0;
}