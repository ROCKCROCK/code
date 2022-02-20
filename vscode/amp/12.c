#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],i,j,count=0;;
 printf("\n\n12. Sparse Matrix or not? by 1901330100078,");
 printf("Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the elements of 3x3 matrix:");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 scanf(" %d",&a[i][j]);
 }
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 if(a[i][j]==0) count++;
 printf("%d ",a[i][j]);
 }
 printf("\n");
 }
 if(count>4) printf("Matrix is Sparse");
 else printf("Matrix is not sparse.");
}