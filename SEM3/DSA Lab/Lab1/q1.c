#include<stdio.h>

int main()
{
int n,a[n],i,large,small;
printf("Enter the number of elements : \n");
scanf("%d",&n);
printf("Input the array elements : \n");
for(i=0;i<n;++i)
scanf("%d",&a[i]);

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

printf("\nThe smallest element is %d\n",small);
printf("\nThe largest element is %d\n",large);

return 0;
}