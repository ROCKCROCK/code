#include<fstream.h>
#include<conio.h>
#include<stdio.h>
struct fun
{
int rn;
char name[80];
double per;
};
void abc();
void def();
void ghi();
void jkl();
void liner();
void mno();
void delll();
void insr(int);
void main()
{
clrscr();
//abc();
//ghi();
//jkl();
//liner();
//mno();
//delll();
insr(2);
def();
getch();
}
void def()
{
fun a;
ifstream t;
t.open("lkl.dat",ios::in|ios::binary);
while(t.read((char*)&a,sizeof(a)))
{
cout<<a.rn<<"\t"<<a.name<<"\t"<<a.per<<endl;
}
t.close();
}
void abc()
{
fun s;
ofstream t;
t.open("lkl.dat",ios::out|ios::binary);
for(int i=1;i<=3;i++)
{
cout<<"\nenter roll no=";
cin>>s.rn;
cout<<"\nenter name=";
gets(s.name);
cout<<"\nenter percentage=";
cin>>s.per;
t.write((char*)&s,sizeof(s));
}
t.close();
}
void ghi()
{
fun s;
ofstream t;
t.open("lkl.dat",ios::app|ios::binary);
for(int i=1;i<=3;i++)
{
 cout<<"\nenter roll no=";
 cin>>s.rn;
 cout<<"\nenter name=";
 gets(s.name);
 cout<<"\nenter percentage=";
 cin>>s.per;
 t.write((char*)&s,sizeof(s));
}
t.close();
}
void jkl()
{
 int c=0;
 fun a;
 ifstream t;
 t.open("lkl.dat",ios::in|ios::binary);
 while(t.read((char*)&a,sizeof(a)))
{
 if (a.per<75)
{
 c++;
}
 cout<<a.rn<<"\t"<<a.name<<"\t"<<a.per<<endl;
}
 cout<<"no. of distinction="<<c;
 t.close();
}
void liner()
{
fun a;
ifstream t;
ofstream q;
t.open("lkl.dat",ios::in|ios::binary);
q.open("kkk.dat",ios::out|ios::binary);
while(t.read((char*)&a,sizeof(a)))
{
if(a.per<60)
{
q.write((char*)&a,sizeof(a));
}
}
t.close();
q.close();
}
void mno()
{
fun a;
ifstream q;
q.open("kkk.dat",ios::in|ios::binary);
while(q.read((char*)&a,sizeof(a)))
{
cout<<a.rn<<"\t"<<a.name<<"\t"<<a.per<<endl;
}
q.close();
}
void delll()
{
fun a;
ifstream t;
ofstream q;
t.open("lkl.dat",ios::in|ios::binary);
q.open("hhh.dat",ios::out|ios::binary);
while(t.read((char*)&a,sizeof(a)))
{
if(a.per>60)
{
q.write((char*)&a,sizeof(a));
}
}
t.close();
q.close();
remove("lkl.dat");
rename("hhh.dat","lkl.dat");
}
void insr(int p1)
{
int r=0;
fun a,b={11,"sdfgh",67};
ifstream t;
ofstream q;
t.open("lkl.dat",ios::in|ios::binary);
q.open("fff.dat",ios::out|ios::binary);
while(t.read((char*)&a,sizeof(a)))
{
r++;
if(r==p1)
{
q.write((char*)&b,sizeof(b));
q.write((char*)&a,sizeof(a));
}
else
{
q.write((char*)&a,sizeof(a));
}
}
t.close();
q.close();
remove("lkl.dat");
rename("fff.dat","lkl.dat");
}