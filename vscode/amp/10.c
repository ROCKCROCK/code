#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],k ,i,j;
 printf("\n\n10. Transpose of Matrix by 1901330100078,");
 printf("Ayush Mohan Pandey, CSE-3-B \n");
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
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 b[i][j]=a[j][i];
 }
 printf("\nTranspose is:\n");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 printf("%d ",b[i][j]);
 printf("\n");
 }
}