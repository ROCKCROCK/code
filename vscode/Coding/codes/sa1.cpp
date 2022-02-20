#include <iostream>
#include <conio.h>
using namespace std;


class ballot1
{
int    candidate;        //candidate you want to create for voting
int vote[50];
int    ballot[3];
static int spballot;            //spoil ballot
public :
ballot1()
{
    cout<<"constructor called";
}
~ballot1()
{
    cout<<"distructor called";
}
void getdisplay(void);
};

int ballot1 :: spballot;

void ballot1 :: getdisplay()
{
cout<<"Enter how many candidate you want to make:-";
cin>>candidate;

static int a,b,c,d,e;
a=0;
a=b=c=d=e;

cout<<"Enter 1-5 Integers";
for(int i=0;i< candidate;i++)
{
    cin>>vote[i];
   switch(vote[i])
   {
    case 1:ballot[a];
            a++;
           break;
      case 2:ballot[b];
            b++;
           break;
      case 3:ballot[c];
            c++;
           break;
      
   default    : ++spballot;
   }
}

//for displaying
    int choice;
   do
   {
    cout<<"Choices Available";
      cout<<"Scored By Ballot A";
      cout<<"2)  Scored By Ballot B";
      cout<<"3)  Scored By Ballot C";
      
      cout<<"4)  EXIT";
      cout<<"Enter Your Choice :- ";
      cin>>choice;
      switch(choice)
      {
      case 1:    cout<<"Scored By Ballot A is "<<a;
                  break;
      case 2:    cout<<"Scored By Ballot B is "<<b;
                  break;
      case 3:    cout<<"Scored By Ballot C is "<<c;
                  break;
     
      case 4:    goto end;
      }
   }while(1);
end:;
}



int main(void)
{

ballot1 o1;
o1.getdisplay();
}
