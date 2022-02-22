#include <iostream>
using namespace std;

int main()
{
    int eno, esal;
    char ename[20];
    cout << "*****Enter Employee details******* "<<endl;
    cout << "Employee No->";
    cin >> eno; 
    cout << "Employee Name->";
    cin >> ename; 
     cout << "Employee Gross Salary->";
    cin >> esal;

    try
    {
        if (esal <= 0)
            throw "Invalid Salary";

        else
        {
            int hra = esal * 15 / 100;
            int ta = esal * 9 / 100;
            int gross = esal + hra * ta;
            cout << "********Employee Details******* " << endl;
            cout << "Employee No->" << eno << endl;
            cout << "Employee Name->" << ename << endl;
            cout << "Employee Gross Salary->" << gross << endl;
        }
    }
    catch (const char *e)
    {
        cout << e << endl;
    }
    return 0;
}