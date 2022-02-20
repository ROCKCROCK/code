#include<bits/stdc++.h>
using namespace std;

class Mother_489
{
    public:
    void display_489()
    {
        cout<<"Display of Mother class\n";
    }
};

class Daughter_489 : public Mother_489
{
    public:
    void display_489()
    {
        cout<<"Display of Daughter class\n";
    }
};

int main()
{
    Daughter_489 d_489;
    d_489.display_489();
    return 0;
}