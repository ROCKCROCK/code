#include <iostream>
using namespace std;

class edetails
{
    int eno, esal , interest;
    char ename[100];
    public:
        void number()
        {
            cin>> eno;
        }
        void name()
        {
            cin>> ename;
        }
        void salary()
        {
            cin>> esal;
        }
        void gross()
        {
            float hra = 0.09*esal;
            float ta= 0.07*esal;
            float gp= esal+hra+ta;
           cout<<eno<<endl<<ename<<endl<<esal<<endl; 
            cout<<gp;
        }
};


int main()
{
    edetails gs;
    cout << "Enter employee number  : ";
    gs.number();
    cout << "Enter employee name : ";
    gs.name();
    cout << "Enter employee salary : ";
    gs.salary();
    cout<<"employee details and gp :"<<endl;
    gs.gross();
    return 0;
}