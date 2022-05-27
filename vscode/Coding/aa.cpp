#include <iostream>
#include <conio.h>
using namespace std;
class student
{
public:
    int rollno;
    char name[10];
};

int main()
{

    student s;

    cout << "Enter Details" << endl;
    cout << "enter roll no. : ";
    cin >> s.rollno;
    cout << "enter Name : ";
    cin >> s.name;
    cout << "THE ENTERED ROLL NUMBER IS : " << s.rollno << endl;
    cout << "WELCOME YOUR NAME IS : " << s.name << endl;
    return 0;
    getch();
}