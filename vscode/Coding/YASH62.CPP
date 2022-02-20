#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct bog
{
char c[80];
int bn;
int nt;
int bs;
};
void abc(bog a[],int n,bog d)
{
 int i,p;
 for (i=0;i<n;i++)
 {
  if(strcmpi(a[i].c,d.c)==0)
  {
    p=i;
    break;
  }
 }
  if(p>=0&&p<n)
 {
  for(i=p;i<n-1;i++)
  {
   a[i]=a[i+1];
  }
 n--;
 }
 else
 {
 cout<<"no deletion";
 }
 for (i=0;i<n;i++)
 {
  puts(a[i].c);
  cout<<a[i].bn;
  cout<<endl;
  cout<<a[i].nt;
  cout<<endl;
  cout<<a[i].bs;
  cout<<endl;
  cout<<endl;
 }

}
void def(bog a[],int n,int c,int p,bog d)
{
 int i;
 if(n-1==c-1)
 {
  cout<<"no incertion"<<endl;
 }
 if(n-1<c-1)
 {
 for (i=n-1;i>=p;i--)
 {
   a[i+1]=a[i];
  }
 a[p]=d;
 }
 for (i=0;i<n;i++)
 {
  puts(a[i].c);
  cout<<a[i].bn;
  cout<<endl;
  cout<<a[i].nt;
  cout<<endl;
  cout<<a[i].bs;
  cout<<endl;
  cout<<endl;
 }

}
   void main()
 {
 clrscr();
 bog b[5];
 int t,h;
 t=5;
 int i;
 for (i=0;i<t;i++)
 {
  gets(b[i].c);
  cin>>b[i].bn;
  cin>>b[i].nt;
  cin>>b[i].bs;
  cout<<endl;
 }
bog g;
cout<<"to delete"<<endl;
gets(g.c);
cin>>g.bn;
cin>>g.nt;
cin>>g.bs;
cout<<endl;
abc(b,t,g);
cout<<endl;
int p,c;
cout<<"enter position"<<endl;
cin>>p;
cout<<"capicity";
cin>>c;
def(b,t,c,p,g);
getch();
 }




