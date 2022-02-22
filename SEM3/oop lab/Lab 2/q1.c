#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,i,n;
    printf("How many numbers you want to enter: ");
    scanf("%d",&n);
    a=(int*)malloc(n * sizeof(int));
    printf("\nenter array-\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    printf("\n array is -\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}