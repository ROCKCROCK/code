#include<stdio.h>
void MergeArrays(int arr1[],int arr2[],int n1,int n2)
{
 int c[100],i,j; int n3 = n1 + n2 ;
 for(i=0;i<n1;i++)
 {
 c[i]=arr1[i];
 }
 for(i=n1,j=0;i<n3,j<n2;i++,j++)
 {
 c[i]=arr2[j];
 }
 printf("The Merged Array is:\n");
 for(i=0;i<n3;i++)
 printf("%d ",c[i]);
}
int main()
{
 int a[50],b[50],i,n1,n2;
printf("\n\n6. Merging Arrays by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements in a:\n");
 scanf("%d",&n1);
 printf("Enter the Numbers in a:\n");
 for(i=0;i<n1;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the number of elements in b:\n");
 scanf("%d",&n2);
 printf("Enter the Numbers in b:\n");
 for(i=0;i<n2;i++)
  {
 scanf("%d",&b[i]);
 }
 MergeArrays(a,b,n1,n2);
}