#include<stdio.h>
int main()
{
 int a[50],i,n,j,val;
 printf("\n\n9. Delete from Array by 1901330100078,");
 printf("Ayush Mohan Pandey, CSE-3-B\n");
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 printf("Enter the Numbers:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the number to be deleted:\n");
 scanf("%d",&val);
 for (i=0;i<n;i++)
 {
 if(a[i]==val)
 {
 for(j=i;j<n;j++)
 a[j]=a[j+1];
 }
 }
 n=n-1;
 printf("The modified array is :\n");
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
 }
}