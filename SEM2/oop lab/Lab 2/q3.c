#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a,i,n,max;
    //printf("How many numbers you want to enter: ");
    //scanf("%d",&n);
    a=(int*)calloc(5,sizeof(int));
    printf("\nenter array-\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",(a+i));
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    /*printf("\n array is -\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",*(a+i));
    }*/
    printf("\ngreatest no. is- %d ", max);
} 