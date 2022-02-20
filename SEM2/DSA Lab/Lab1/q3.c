#include<stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i, element;
    printf("How many numbers you want to enter: ");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("\nEnter elements of array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nEnter element to be found : ");
    scanf("%d", &element);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(p[i] == element)
            flag = 1;
    }
    if(flag == 1)    
        printf("\nElement is found");
    else
        printf("\n Element is not found");
    
      return 0;
}