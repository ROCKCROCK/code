#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],k ,i,j;
 printf("\n\n11. Upper & Lower Triangle of Matrix by ");
 printf("1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the elements of 3x3 matrix:\n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 scanf(" %d",&a[i][j]);
 }
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 printf("%d ",a[i][j]);
 printf("\n");
 }
 printf("\n The Lower Triangular Matrix is: ");
 for(i=0;i<3;i++)
 {
 printf("\n");
 for(j=0;j<3;j++)
 {
 if(i>=j)
 printf("%d ", a[i][j]);
 else
 {
 printf(" ");
 }
 }
 }
 printf("\n\n The Upper Triangular Matrix is: ");
 for(i=0;i<3;i++)
 {
 printf("\n");
 for(j=0;j<3;j++)
 {
 if(i>j)
 {
 printf("  ");
 }
 else
 printf("%d ", a[i][j]);
 }}}