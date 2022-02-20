#include<iostream>
using namespace std;
class Point 
{
    public:
    int xcord,ycord;
        Point(int x, int y)
        {
            xcord=x; 
            ycord=y;
        }
};
int main()
{
    int xc,yc;
    cout<<"Enter the Xcordinate and the Ycordinate"<<endl;
    cin>>xc>>yc;
    
    Point p(xc,yc);
    cout<<"Xcordinates: "<<p.xcord<<" YCordinate "<<p.ycord<<endl;
    return 0;
}

