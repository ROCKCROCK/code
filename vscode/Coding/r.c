#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct node
{
    struct node *lchild;
    int info;
    struct node *r;
};
struct node *insert(struct node *root, int insert_key);
void inorder_trav(struct node *root);

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
        printf("3.Inorder Traversal\n");
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
            inorder_trav(root);
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }

    return 0;
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
            ptr = ptr->lchild;
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
    tmp->lchild = NULL;
    tmp->r = NULL;

    if (par == NULL)
        root = tmp;
    else if (insert_key < par->info)
        par->lchild = tmp;
    else
        par->r = tmp;

    return root;
}
void inorder_trav(struct node *root)
{
    struct node *ptr = root;

    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    while (1)
    {
        while (ptr->lchild != NULL)
        {
            push(ptr);
            ptr = ptr->lchild;
        }

        while (ptr->r == NULL)
        {
            printf("%d  ", ptr->info);
            if (empty())
                return;
            ptr = pop();
        }
        printf("%d  ", ptr->info);
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
