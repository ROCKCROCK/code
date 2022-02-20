#include<stdio.h>
#include<stdlib.h>
struct data
{
    int x,y,z;
    float s,av,c;
    double roll;
    char name[20];
};
void cgpa( struct data a)
{
    a.c=a.av/30;
    printf("\ncgpa is = %f",a.c);
}
void avg( struct data a)
{
    a.av=a.s/3;
    printf("\navg of marks is = %f",a.av);
    cgpa(a);
}
void sum( struct data a )
{
    a.s=a.x+a.y+a.z;
    printf("\nsum of marks is= %f",a.s);
    avg(a); 
}


int main()
{
    struct data s;
    printf("enter name-\n" );
    scanf("%s",s.name);
    printf("enter roll no.-\n" );
    scanf("%lf",&s.roll);
    printf("enter marks 1-");
    scanf("%d",&s.x);
    printf("enter marks 2-");
    scanf("%d",&s.y);
    printf("enter marks 3-");
    scanf("%d",&s.z);
    sum(s);
    
    return 0;
}
