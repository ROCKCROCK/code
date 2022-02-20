#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct node
{
    struct node *lchild;
    int info;
    struct node *r;
};

struct node *search(struct node *root, int search_key);
struct node *smallest(struct node *root);
struct node *largest(struct node *root);
struct node *insert(struct node *root, int insert_key);
struct node *delete (struct node *root, int del_key);
struct node *A(struct node *root, struct node *par, struct node *ptr);
struct node *B(struct node *root, struct node *par, struct node *ptr);
struct node *C(struct node *root, struct node *par, struct node *ptr);
void preorder_trav(struct node *root);
void inorder_trav(struct node *root);
void post_trav(struct node *root);
void display(struct node *ptr, int level);

struct node *queue[MAX];
int front = -1, rear = -1;
void insert_queue(struct node *item);
struct node *del_queue();
int queue_empty();

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
        printf("3.Preorder Traversal\n");
        printf("4.Inorder Traversal\n");
        printf("5.Postorder Traversal\n");
        printf("6.Search\n");
        printf("7 Find Smallest Element\n");
        printf("8.Find Largest Element\n");
        printf("9. Display\n");
        printf("10. Delete\n");
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
            preorder_trav(root);
            break;

        case 4:
            inorder_trav(root);
            break;

        case 5:
            post_trav(root);
            break;

        case 6:
            printf("\nEnter the key to be searched : ");
            scanf("%d", &k);
            ptr = search(root, k);
            if (ptr == NULL)
                printf("\nKey not present\n");
            else
                printf("\nKey present\n");
            break;

        case 7:
            ptr = smallest(root);
            if (ptr != NULL)
                printf("\nSmallest key is %d\n", ptr->info);
            break;

        case 8:
            ptr = largest(root);
            if (ptr != NULL)
                printf("\nLargest key is %d\n", ptr->info);
            break;

        case 9:
            printf("\n");
            display(root, 0);
            printf("\n");
            break;

        case 10:
            printf("\nEnter the key to be deleted : ");
            scanf("%d", &k);
            root = delete (root, k);
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
            ptr = ptr->lchild;
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

struct node *smallest(struct node *ptr)
{
    if (ptr != NULL)
        while (ptr->lchild != NULL)
            ptr = ptr->lchild;
    return ptr;
}

struct node *largest(struct node *ptr)
{
    if (ptr != NULL)
        while (ptr->r != NULL)
            ptr = ptr->r;
    return ptr;
}

struct node *delete (struct node *root, int del_key)
{
    struct node *par, *ptr;

    ptr = root;
    par = NULL;
    while (ptr != NULL)
    {
        if (del_key == ptr->info)
            break;
        par = ptr;
        if (del_key < ptr->info)
            ptr = ptr->lchild;
        else
            ptr = ptr->r;
    }

    if (ptr == NULL)
        printf("Delete key not present in tree\n");
    else if (ptr->lchild != NULL && ptr->r != NULL)
        root = C(root, par, ptr);
    else if (ptr->lchild != NULL)
        root = B(root, par, ptr);
    else if (ptr->r != NULL)
        root = B(root, par, ptr);
    else
        root = A(root, par, ptr);

    return root;
}

struct node *A(struct node *root, struct node *par, struct node *ptr)
{
    if (par == NULL)
        root = NULL;
    else if (ptr == par->lchild)
        par->lchild = NULL;
    else
        par->r = NULL;
    free(ptr);
    return root;
}

struct node *B(struct node *root, struct node *par, struct node *ptr)
{
    struct node *child;

    if (ptr->lchild != NULL)
        child = ptr->lchild;
    else
        child = ptr->r;

    if (par == NULL)
        root = child;
    else if (ptr == par->lchild)
        par->lchild = child;
    else
        par->r = child;
    free(ptr);
    return root;
}

struct node *C(struct node *root, struct node *par, struct node *ptr)
{
    struct node *succ, *parsucc;

    parsucc = ptr;
    succ = ptr->r;
    while (succ->lchild != NULL)
    {
        parsucc = succ;
        succ = succ->lchild;
    }

    ptr->info = succ->info;

    if (succ->lchild == NULL && succ->r == NULL)
        root = A(root, parsucc, succ);
    else
        root = B(root, parsucc, succ);
    return root;
}

void preorder_trav(struct node *root)
{
    struct node *ptr = root;
    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    push(ptr);
    while (!empty())
    {
        ptr = pop();
        printf("%d  ", ptr->info);
        if (ptr->r != NULL)
            push(ptr->r);
        if (ptr->lchild != NULL)
            push(ptr->lchild);
    }
    printf("\n");
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
        while (ptr->lchild != NULL)
        {
            push(ptr);
            ptr = ptr->lchild;
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

void insert_queue(struct node *item)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = rear + 1;
    queue[rear] = item;
}

struct node *del_queue()
{
    struct node *item;
    if (front == -1 || front == rear + 1)
    {
        printf("Queue Underflow\n");
        return 0;
    }
    item = queue[front];
    front = front + 1;
    return item;
}

int queue_empty()
{
    if (front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
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

void display(struct node *ptr, int level)
{
    int i;
    if (ptr == NULL)
        return;
    else
    {
        display(ptr->r, level + 1);
        printf("\n");
        for (i = 0; i < level; i++)
            printf("    ");
        printf("%d", ptr->info);
        display(ptr->lchild, level + 1);
    }
}