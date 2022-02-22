#include<stdio.h>
void main()
{
     int n,i,c,j=0;
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
      if(a[i]==0)
      {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        j=j+1;
      }
    }
  printf("array is -\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
}
