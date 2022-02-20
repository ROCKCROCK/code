#include<stdio.h>
void BubbleSort(int arr[],int n)
{
 int i,j,temp;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n-i-1;j++)
 {
 if(arr[j] > arr[j+1])
 {
 temp = arr[j];
 arr[j] = arr[j+1];
 arr[j+1] = temp;
 }
 }
 }
}
int main()
{
 int a[50],i,n;
 printf("\n\n4. Bubble Sort by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 printf("Enter the Numbers:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 BubbleSort(a,n);
 printf("The Sorted Array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}