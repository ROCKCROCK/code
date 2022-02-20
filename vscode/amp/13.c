#include<stdio.h>
int main()
{
 int a[3][3],i,j,count=0;int k=0;
 printf("\n\n13. Triplet Representation of Sparse Matrix");
 printf(" by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
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
 if(a[i][j]!=0) count++;
 printf("%d ",a[i][j]);
 }
 printf("\n");
 }
 printf("\n\nTriplet Representation is:\n");
 int b[3][count];
 for (i=0;i<3;i++)
 {for (j=0;j<3;j++)
 {if (a[i][j] != 0)
 {
 b[0][k] = i;
 b[1][k] = j;
 b[2][k] = a[i][j];
 k++;
 }}}
 for (i=0;i<3;i++)
 {
 for (j=0;j<count;j++)
 printf("%d ", b[i][j]);
 printf("\n");
 }
}