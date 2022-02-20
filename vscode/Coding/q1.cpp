#include <iostream>
#include <conio.h>
using namespace std;

class second;

class first

{

int x;

public:

void get()

{

cout<<"\nEnter the value of x:";

cin>>x;

}

friend void max(first,second);

};

class second

{

int y;

public:

void get()

{

cout<<"\nEnter the value of y:";

cin>>y;

}

friend void max(first,second);

};

void max(first a,second b)

{

if(a.x>b.y)

{

cout<<"\nGreater value is:"<<a.x;

}

else

{

cout<<"\nGreater value is:"<<b.y;

}

}

int main(void)

{

first a;

second b;


a.get();

b.get();

max(a,b);


}