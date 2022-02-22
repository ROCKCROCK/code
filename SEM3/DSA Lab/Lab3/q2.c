#include<stdio.h>
void main()
{
    int n,i,c=0,j;
    printf("enter no. of elements in a array-");
    scanf("%d", &n);
    int a[n];
    printf("enter  array -\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
     if(a[i]%2!=0)
     {
       j=a[i];
       a[i]=a[c];
       a[c]=j;
       c++;
     }

    } 
    
    printf("array is -\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}