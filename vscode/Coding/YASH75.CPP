#include<fstream.h>
#include<conio.h>
#include<string.h>
void ou()
{
ofstream t;
t.open("rrr.txt",ios::out);
t<<"pay attention"<<endl;
t<<"it is important\n";
t.close();
}
void app()
{ofstream t;
t.open("rrr.txt",ios::app);
t<<"pay attention"<<endl;
t<<"it is important\n";
t.close();
}
void rd()
{
ifstream t;
char a[80];
t.open("rrr.txt",ios::in);
t.getline(a,80);
cout<<a<<endl;
t.getline(a,80);
cout<<a<<endl;
t.close();
}
void loop()
{
ifstream t;
char a[80];
t.open("rrr.txt",ios::in);
while(!t.eof())
{
cout<<t.eof()<<endl;
t.getline(a,80);
cout<<a<<endl;
}
cout<<t.eof();
t.close();
}
void rdc()
{
ifstream t;
char a;
t.open("rrr.txt",ios::in);
while(!t.eof())
{
t.get(a);
cout<<a<<"#";
}
cout<<t.eof();
t.close();
}
void rdw()
{
ifstream t;
char a[80];
t.open("rrr.txt",ios::in);
while(!t.eof())
{
t>>a;
cout<<a<<endl;
}
t.close();
}
void rdh()
{
int c=0;
ifstream t;
char a[80];
t.open("rrr.txt",ios::in);
while(!t.eof())
{
t>>a;
cout<<a<<endl;
if(strcmpi(a,"is")==0)
{
c=c+1;
}
}
cout<<c;
t.close();
}
void abc()
{
int c=0;
ifstream t;
char a;
t.open("rrr.txt",ios::in);
while(!t.eof())
{
t.get(a);
if(a=='t'||a=='T')
{
c=c+1;
}
}
cout<<c;
t.close();
}
void def()
{
int c=0,al=0,l;
ifstream t;
char a[80];
t.open("rrr.txt",ios::in);
while(!t.eof())
{
t>>a;
l=strlen(a);
al=al+l;
c++;
}
al=al/2;
cout<<al;
t.close();
}
void ghi()
{
int c=0;
ifstream t;
char a[80];
t.open("rrr.txt",ios::in);
while(!t.eof())
{
t.getline(a,80);
if(strlen(a)%2==1)
{
c++;
}
}
cout<<c;
t.close();
}
void liner()
{
int c=0;
char a[80];
ifstream t;
ofstream q;
t.open("rrr.txt",ios::in);
q.open("lkl.txt",ios::out);
while(!t.eof())
{
t>>a;
cout<<a<<endl;
if(strcmpi(a,"is")==0||strcmpi(a,"the")==0)
{
q<<a;
}
}
t.close();
q.close();
}
void main()
{
clrscr();
//ou();
//app();
//rd();
//loop();
//rdw();
//rdc();
//rdh();
//abc();
//def();
//ghi();
liner();
getch();
}
