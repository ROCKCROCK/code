#include<stdio.h>
#include <stdlib.h>
typedef struct stack stack;
struct stack
{
    int size;
    int top;
    int *s;
};

void create(stack *st)
{
    st->top = -1;
    printf("Enter the size of the stack : ");
    scanf("%d", &st->size);
    st->s = (int *)malloc(st->size*sizeof(int));
    printf("%d",st->s);
}

void isEmpty(stack *st)
{
    if(st->top == -1)
        printf("\nSTACK IS EMPTY\n");
    else 
        printf("\nSTACK HAS ELEMENTS\n");
}

void push(stack *st, int x)
{   
    if(st->top == st->size-1)
        printf("---OVERFLOW OCCURED---");  
    else
    {
        (st->top)++;
        st->s[(st->top)] = x;
    }          
}

int pop(stack *st)
{
    int element = -1;
    if(st->top == -1)
        printf("---UNDERFLOW OCCURED---");
    else
    {
        element = st->s[st->top];
        st->top--;
    }
    return element;     
}

void display(stack st)
{
    if(st.top == -1)
        printf("\nSTACK IS EMPTY");
    else
    {
        printf("\nThe stack is as follows :\n");
        for(int i=st.top; i>-1; i--)
            printf("%d\n", st.s[i]);
    }
}

void main()
{
    int choice, element;
    stack st;
    create(&st);
    do{
        printf("Enter  1.Check for empty stack   2.Push element   3. Pop elememt   4. Display   5. Exit\t: ");
        scanf("%d", &choice);    
        switch (choice)
        {
        case 1:
            isEmpty(&st);
            break;
        case 2:            
            printf("\nEnter element : ");
            scanf("%d", element);
            push(&st, element);
            break;
        
        case 3:
            pop(&st);
        
        case 4:
            display(st);
        
        default:
            printf("\nWrong choice : ");    
        }
    }while(choice != 5);
}
  