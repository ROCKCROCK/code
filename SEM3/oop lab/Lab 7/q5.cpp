#include <iostream>
using namespace std;
class student
{
public:
    string name;
    double roll;
    float marks[3];
    void getdata()
    {
        cout << "enter name->";
        cin >> name;
        cout << "enter Roll no.->";
        cin >> roll;
        for (int i = 0; i < 3; i++)
        {
            cout << "enter " << i + 1 << "marks->";
            cin >> marks[i];
        }
    }
};
class result : public student
{
public:
    void display()
    {
        int i, sum = 0, avg;
        for (i = 0; i < 3; i++)
        {
            sum += marks[i];
        }
        avg = sum / 3;
        cout << " name->" << name << endl;

        cout << " Roll no.->" << roll << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << "subject marks->" << marks[i] << endl;
        }
        cout<<"grade is->";
        if (avg >= 91 && avg <= 100)
        {
            cout << "O" << endl;
        }
        else if (avg >= 81 && avg < 91)
        {
            cout << "E" << endl;
        }
        else if (avg >= 71 && avg < 81)
        {
            cout << "A" << endl;
        }
        else if (avg >= 61 && avg < 71)
        {
            cout << "B" << endl;
        }
        else if (avg >= 51 && avg < 61)
        {
            cout << "C" << endl;
        }
        else if (avg >= 40 && avg < 51)
        {
            cout << "D" << endl;
        }
        
        else if (avg < 40)
        {
            cout << "F" << endl;
        }
    }
};
int main()
{
    result obj;
    obj.getdata();
    obj.display();
    return 0;
}