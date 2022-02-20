#include <stdio.h>
#include <stdlib.h>

typedef struct expo *node;
struct expo
{
    int exp;
    int coef;
    node next;
};

node start = NULL;

node create(node);
node display(node);

void main()
{
    printf("Enter the polynomial as follows: ");
    start = create(start);
    
    start = display(start);
}

node create(node start)
{
    node ptr;
    int n=0, c, e; 
    
    do{
        printf("\nEnter a number . Enter -1 to stop\n");
        scanf("%d", &n);
        if(n==-1)
            break;
        printf("\nEnter the coefficient : ");
        scanf("%d", &c);
        printf("\nEnter the exponent : ");
        scanf("%d", &e);

        if(start == NULL)
        {
            struct expo *newnode = (struct expo*)malloc(sizeof(struct expo));
            newnode->coef = c;
            newnode->exp = e;
            newnode->next = NULL;
            start = newnode;
        }

        else
        {
            ptr = start;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            struct expo *newnode = (struct expo*)malloc(sizeof(struct expo));
            newnode->coef = c;
            newnode->exp = e;
            newnode->next = NULL;
            ptr->next = newnode;         
        }

    }while(n != -1);

    return start;
}

node display(node start)
{
    node ptr;
    ptr = start;
    
    printf("\nThe polynomial is : ");
    while(ptr != NULL)
    {
        printf("(%dx^%d)", ptr->coef, ptr->exp);
        if(ptr->next != NULL)
            printf(" + ");
        ptr = ptr->next;

    }
    return start;
}