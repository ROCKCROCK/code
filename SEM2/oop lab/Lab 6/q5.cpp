#include <iostream>
using namespace std;

class emp
{
    public:
    string ename;
    int eno;
    float esal, gross;

    emp(string n, int no, float sal)
    {
        ename = n;
        eno = no;
        esal = sal;
    }
    void calc()
    {
        gross = esal+ 0.15*esal + 0.17*esal;
    }
    void display()
    {
        cout<<"\nGross Salary : "<<gross;
    }
};

int main(void)
{
    string n;
    int no;
    float sal;
    cout<<"Enter the name:"<<endl;
    cin>>n;
    cout<<"Enter the emp no:"<<endl;
    cin>>no;
    cout<<"Enter the salary:"<<endl;
    cin>>sal;
    emp ob(n, no, sal);
    ob.calc();
    ob.display();
}