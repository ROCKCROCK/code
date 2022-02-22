#include<stdio.h>   
int main ()  
{  
    int a[10]; 
    int item, i,flag;  
    printf("Enter Item in the array->\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("\nEnter Item which is to be searched\n");  
    scanf("%d",&item);  
    for (i = 0; i< 10; i++)  
    {  
        if(a[i] == item)   
        {  
            flag = i+1;  
            break;  
        }   
        else   
        flag = 0;  
    }   
    if(flag != 0)  
    {  
        printf("\nItem found at location %d\n",flag);  
    }  
    else  
    {  
        printf("\nItem not found\n");   
    }  
    return 0;
}   