#include<stdio.h>
void InsertionSort(int arr[],int n)
{
 int i, j, temp;
 for(i=1;i<n;i++)
 {
 temp = arr[i];
 j = i-1;
 while((temp < arr[j]) && (j>=0))
 {
 arr[j+1] = arr[j];
 j--;
 }
 arr[j+1] = temp;
 }
}
int main()
{
 int a[50],i,n;
 printf("\n\n5. Insertion Sort by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 printf("Enter the Numbers:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 InsertionSort(a,n);
 printf("The Sorted Array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}