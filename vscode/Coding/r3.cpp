#include<bits/stdc++.h>
using namespace std;

class Shape_489
{
    protected:
    unsigned int width_489 , height_489;
    public:
    Shape_489(unsigned int width_489 , unsigned int height_489)
    {   
        this->width_489 = width_489;
        this->height_489 = height_489;
    }
};

class Triangle_489 : public Shape_489
{

    public:
    Triangle_489(int a , int b) : Shape_489(a , b){}
    void area_489()
    {
        cout<<"area of triangle is : "<<float(0.5 * width_489 * height_489 * 1.0)<<"\n";
    } 
};  

class Rectangle_489 : public Shape_489
{
    public:
    Rectangle_489(int a_489 , int b_489) : Shape_489(a_489 , b_489){}
    void area_489()
    {
        cout<<"area of Rectangle is : "<<float(width_489 * height_489 * 1.0)<<"\n";
    } 
};

int main()
{
    Triangle_489 t_489(3 , 6);
    Rectangle_489 r_489(4 , 9);
    t_489.area_489();
    r_489.area_489();
    return 0;
}


