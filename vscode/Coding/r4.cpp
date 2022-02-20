#include<bits/stdc++.h>
using namespace std;

class Box_489
{
    unsigned int price_489;
    public:
    Box_489()
    {
        this->price_489 = 60;
    }
    void calc_price_489(int x_489)
    {
        cout<<"price of 3-D Boxes are : "<<(price_489 * x_489)<<"\n";
    }
};

class Sheet_489
{
    unsigned int price_489;
    public:
    Sheet_489()
    {
        this->price_489 = 40;
    }
    void calc_price_489(int x_489)
    {
        cout<<"price of 2-D Sheets are : "<<(price_489 * x_489)<<"\n";
    }
};

int main()
{
    Box_489 b_489;
    Sheet_489 s_489;
    unsigned int x_489;
    cout<<"enter the number of 3-D boxes : ";
    cin>>x_489;
    b_489.calc_price_489(x_489);
    cout<<"enter the number of 2-D Sheets : ";
    cin>>x_489;
    s_489.calc_price_489(x_489);
    return 0;
}