#include <iostream>
#include <conio.h>
using namespace std;
class student
{
public:
    int roll;
    string name;
    int marks;

    student()
    {
        cout << "enter roll->";
        cin >> roll;
        cout << "enter Name->";
        cin >> name;
        cout << "marks ->";
        cin >> marks;
    }
};

int main()
{

    student t;
    cout << "-------------displaying-----------" << endl;
    cout << "roll is->" << t.roll << endl;
    cout << "Name is->" << t.name << endl;
    cout << "mark is->" << t.marks << endl;
    return 0;
    getch();
}