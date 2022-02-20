#include <stdio.h>
int main()
{
 int a[50], n, i, item, loc = 0;
 printf("\n\n1. Linear Search by 1901330100078, Ayush Mohan Pandey, CSE-3-B \n");
 printf("Enter the number of elements:\n");
 scanf("%d", &n);
 printf("Enter the Numbers:\n");
 for (i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 }
 printf("Enter the element to be searched for:\n");
 scanf("%d", &item);
 for (i = 0; i < n; i++)
 {
 if (a[i] == item)
 {
 loc = i + 1;
 break;
 }
 }
 if (loc > 0)
 printf("Element %d found at location %d .", item, loc);
 else
 printf("Element not found.");
}