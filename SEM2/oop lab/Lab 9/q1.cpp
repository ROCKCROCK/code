#include <iostream>
#include <cmath>
using namespace std;
class complex
{
    public:
    int real, img;  
    complex(int real, int img)
    {
        this->real=real ;
        this->img=img ;
    }
    complex compare(complex X)
    {
        double z1, z2;
        complex ob1(0,0);
        ob1.real = real;
        ob1.img = img;
        z1 = sqrt(real*real + img*img);
        z2 = sqrt(X.real*X.real + X.img*X.img);
        if(z1>z2)
            return ob1;
        else    
            return X;
    }
};
int main()
{
    complex ob1(8, 5);
    complex ob2(9, 4);
    complex result(0,0);
    result = ob1.compare(ob2);
    cout<<"The greater complex number is : "<<result.real<<"+"<<result.img<<"i"<<endl;
    return 0;
}