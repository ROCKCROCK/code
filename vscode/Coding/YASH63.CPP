#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<string.h>
#include<iomanip.h>
struct STUDENT
{
char name[80];
float E,M,P,C,CS;
float L;
}rec[5];
void star()
{
for(int i=1;i<41;i++)
{
cout<<"**";
}
cout<<"\n";
}
void search(STUDENT p[],int size )
{
    char ename[30];
    int q=-1;
    cout<<"Enter Student Name:-";
    gets(ename);
    for(int i=0;i<size;i++)
    {
       if(strcmpi(p[i].name,ename)==0)
       q=i;

    }
    if(q>=0)
    cout<<"Student Is Found At Percentage:"<<p[q].L;
    cout<<endl;
};
//Deletion of the item
void del(STUDENT p[],int size)
{
    char ename[20];
    int i,j,q;
    cout<<"Enter Student Name"<<endl;
    gets(ename);
    for(i=0;i<size;i++)
    {
	if(strcmpi(p[i].name,ename)==0)
	q=i;
    }
    //deletion
    for(j=q;j<size-1;j++)
    {
	p[j]=p[j+1];
    }
    size--;
    cout<<"The Student Remain"<<endl;
    for(i=0;i<size;i++)
    {
	puts(p[i].name);
	cout<<endl;
    }
    cout<<endl;
};
//Insertion of the item
void insert( STUDENT p[],int n)
{
    int li,i,q;
    cout<<"Enter The Number Of Student"<<endl;
    cin>>li;
    cout<<"Enter The Place At Which Student Name To Be Inserted"<<endl;
    cin>>q;
    STUDENT j;
    cout<<"Enter The Name & Marks Of The Student"<<endl;
    cin>>j.name;
    cin>>j.E;
    cin>>j.M;
    cin>>j.P;
    cin>>j.C;
    cin>>j.CS;
    j.L=(j.E+j.M+j.P+j.C+j.CS)/5;
    if(li<n-1)
    {
	for(i=li;i>=q;i--)
	{
	    p[i+1]=p[i];
	}
	p[q]=j;
	li++;
    }
    for(i=0;i<=li;i++)
    {
	puts(p[i].name);
    }

cout<<endl;
};
void display(STUDENT p[],int size)
{
cout<<setw(52)<<"$$$$MARKSHEET MANAGEMENT$$$$\n";
star();
cout<<setw(10)<<"Student Name"<<setw(10)<<"English"<<setw(10)<<"Maths"<<setw(10)<<"Physics"<<setw(10)<<"Cemistry"<<setw(10)<<"C.S."<<setw(18)<<"Percentage%";
star();
for(int i=0;i<size;i++)
{
cout<<setw(10)<<p[i].name<<setw(10)<<p[i].E<<setw(10)<<p[i].M<<setw(10)<<p[i].P<<setw(10)<<p[i].C<<setw(10)<<p[i].CS<<setw(18)<<p[i].L<<endl;
}
star();
};
void main()
{
textcolor(YELLOW);
textbackground(RED);
clrscr();
int i,ch;
for(i=0;i<5;i++)
{
cout<<"\nEnter Student Name:-";
cin>>rec[i].name;
cout<<"Enter Marks Of English:-";
cin>>rec[i].E;
cout<<"Enter Marks Of Maths:-";
cin>>rec[i].M;
cout<<"Enter Marks Of Physics:-";
cin>>rec[i].P;
cout<<"Enter Marks Of Chemistry:-";
cin>>rec[i].C;
cout<<"Enter Marks Of Computer Science:-";
cin>>rec[i].CS;
rec[i].L=(rec[i].E+rec[i].M+rec[i].P+rec[i].C+rec[i].CS)/5;
}
cout<<"\n\n\n";
start:
cout<<"Enter The Choice"<<endl;
    cout<<"1. To Search The Student"<<endl;
    cout<<"2. To Get Detail Of The Student"<<endl;
    cout<<"3. To Enter The New Student"<<endl;
    cout<<"4. To Remove The Student"<<endl;
    cout<<"5. To Know Made By"<<endl;
    cout<<"6. To Exit The program"<<endl;

    cout<<endl;
    cin>>ch;

     switch(ch)
      {
       case 1:search(rec,5);
	      cout<<endl;
	      break;
       case 2:display(rec,5);
	      cout<<endl;
	      break;
       case 3:insert(rec,8);
	      cout<<endl;
	      break;
       case 4:del(rec,5);
	      cout<<endl;
	       break;

       case 5:cout<<"#####MADE BY*****"<<"\n"<<"$NAMAN KUMAR SINHA$"<<"\n"<<"#11-A#"<<"\n"<<endl;
	      cout<<endl;
	       break;
       case 6: goto stop;

      }
goto start;
getch();
stop:
}













