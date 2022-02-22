#include <stdio.h>
#include <stdlib.h>
#define MAX 50
                     //8 7 10 12 11 13 9 4 2 14 22 1 
struct node
{
    struct node *l;
    int info;
    struct node *r;
};

struct node *search(struct node *root, int search_key);
struct node *insert(struct node *root, int insert_key);
void post_trav(struct node *root);

struct node *stack[MAX];
int top = -1;
void push(struct node *item);
struct node *pop();
int empty();

int main()
{
    struct node *root = NULL, *ptr;
    int choice, k;

    while (1)
    {
        
        printf("\n------------------------------------------------");
        printf("\nBinary Search Tree Menu");
        printf("\n------------------------------------------------");
        printf("\n");
        printf("1.Quit\n");
        printf("2.Create\n");
        printf("3.Postorder Traversal\n");
        printf("4.Search\n");
        printf("\n------------------------------------------------");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            exit(1);

        case 2:
            printf("\nEnter the key to be inserted : ");
            scanf("%d", &k);
            root = insert(root, k);
            break;
        case 3:
            post_trav(root);
            break;
        case 4:
            printf("\nEnter the key to be searched : ");
            scanf("%d", &k);
            ptr = search(root, k);
            if (ptr == NULL)
                printf("\nKey not present\n");
            else
                printf("\nKey present\n");
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }

    return 0;
}

struct node *search(struct node *ptr, int search_key)
{
    while (ptr != NULL)
    {
        if (search_key < ptr->info)
            ptr = ptr->l;
        else if (search_key > ptr->info)
            ptr = ptr->r;
        else
            return ptr;
    }
    return NULL;
}

struct node *insert(struct node *root, int insert_key)
{
    struct node *tmp, *par, *ptr;

    ptr = root;
    par = NULL;

    while (ptr != NULL)
    {
        par = ptr;
        if (insert_key < ptr->info)
            ptr = ptr->l;
        else if (insert_key > ptr->info)
            ptr = ptr->r;
        else
        {
            printf("\nDuplicate key");
            return root;
        }
    }

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = insert_key;
    tmp->l = NULL;
    tmp->r = NULL;

    if (par == NULL)
        root = tmp;
    else if (insert_key < par->info)
        par->l = tmp;
    else
        par->r = tmp;

    return root;
}
void post_trav(struct node *root)
{
    struct node *ptr = root;
    struct node *q;

    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    q = root;
    while (1)
    {
        while (ptr->l != NULL)
        {
            push(ptr);
            ptr = ptr->l;
        }

        while (ptr->r == NULL || ptr->r == q)
        {
            printf("%d  ", ptr->info);
            q = ptr;
            if (empty())
                return;
            ptr = pop();
        }
        push(ptr);
        ptr = ptr->r;
    }
    printf("\n");
}



void push(struct node *item)
{
    if (top == (MAX - 1))
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = item;
}

struct node *pop()
{
    struct node *item;
    if (top == -1)
    {
        printf("Stack Underflow....\n");
        exit(1);
    }
    item = stack[top];
    top = top - 1;
    return item;
}

int empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

