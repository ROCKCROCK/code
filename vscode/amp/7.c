#include<stdio.h>
int main()
{
 int mm=1, ctr=0;
 int a[50],arr2[50],arr3[50],j,n,i;
 printf("\n\n7. Count Duplicates in an array");
 printf(" by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 printf("Enter the Numbers:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n; i++)
 {
 arr2[i]=a[i];
 arr3[i]=0;
 }
for(i=0;i<n; i++)
 { for(j=0;j<n;j++)
 { if(a[i]==arr2[j])
 { arr3[j]=mm;
 mm++;
 }
 }
 mm=1;
 }
 for(i=0; i<n; i++)
 { if(arr3[i]==2)
 ctr++;
 }
 printf("The total number of duplicate");
 printf(" elements found in the array is: %d \n", ctr);
}