#include<stdio.h>
void SelectionSort(int arr[],int n)
{
 int i,small,k, pos, temp;
 for(k=0;k<n;k++)
 {
 pos=k;small=arr[k];
 for(i=k+1;i<n;i++)
 {
 if(arr[i]<small)
 {
 small=arr[i];
 pos=i;
 }
 }
 temp = arr[k];
 arr[k] = arr[pos];
 arr[pos] = temp;
 }
}
int main()
{
 int a[50],i,n;
 printf("\n\n3. Selection Sort by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 printf("Enter the Numbers:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 SelectionSort(a,n);
 printf("The Sorted Array is:\n");
 for(i=0;i<n;i++)
 printf("%d ",a[i]);
}