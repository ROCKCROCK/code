#include<stdio.h>
int main()
{
 int a[50],i,n,item,beg,mid,end,loc=-1;
 printf("\n\n2.Binary Search by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements:\n");
 scanf("%d",&n);
 printf("Enter the Numbers:\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the element to be searched for:\n");
 scanf("%d",&item);
 beg=0; end=n-1;
 while (beg<=end)
 {
 mid = (beg+end)/2;
 if ( item == a[mid] )
 {
 loc = mid+1 ;
 break;
 }
 if ( item > a[mid] )
 beg = mid+1;
 else
 end = mid-1 ;
 }
 if( loc !=-1 )
 printf("Element %d found at location %d.",item,loc);
 else
 printf("Element not found.");
}