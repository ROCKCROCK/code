#include<stdio.h>
int main()
{
 int a[50],i,n,val;
 printf("\n\n8. Insert into Array by 1901330100078,");
 printf("Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 printf("Enter the Numbers:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter value to be inserted into array:");
 scanf("%d",&val);
 a[n]=val;
 n=n+1;
 printf("The array is :\n");
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
}