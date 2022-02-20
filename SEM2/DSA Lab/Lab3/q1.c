#include<stdio.h>
int main()
{
    int n,i,max,max1,min,min1;
    printf("enter no. of elements in a array-");
    scanf("%d", &n);
    int a[n];
    printf("enter  array -\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    if(a[0]>a[1])
    {
     max=a[0];
     max1=a[1];
    }
    else
    {
        max=a[1];
        max1=a[0];
    }
    for(i=2;i<n;i++)
    {
      if(max<a[i])
      {
          max1=max;
          max=a[i];
      }
      else if(max1<a[i])
      {
          max1=a[i];
      }
    }
    printf("\nsecond largest element is- %d ", max1);  
    if(a[0]<a[1])
    {
     min=a[0];
     min1=a[1];
    }
    else
    {
        min=a[1];
        min1=a[0];
    }
    for(i=2;i<n;i++)
    {
      if(min>a[i])
      {
          min1=min;
          min=a[i];
      }
      else if(min1>a[i])
      {
          min1=a[i];
      }
    }
    printf("\nsecond smallest element is- %d ", min1);  
    return 0;
}

