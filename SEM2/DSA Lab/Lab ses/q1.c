#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **h,int d)
{
    struct node *cur,*ptr;
    cur=malloc(sizeof(struct node));
    printf("\nENTER ELEMENT %d -> ",d);
    scanf("%d",&cur->data);
    cur->next=NULL;
    if(*h==NULL)
    {
        *h=cur;
        ptr=cur;
    }
    else
    {
        ptr->next=cur;
        ptr=cur;
    }
}
void match(struct node *h1,struct node *h2,struct node **h3)
{
    if(h1==NULL)
        *h3=h2;
    else
    {
        struct node *ptr;
        *h3=h1;
        for(ptr=*h3;ptr->next!=NULL;ptr=ptr->next);
        ptr->next=h2;
    }
}
void common(struct node *h,struct node **h1)
{
    struct node *cur,*ptr,*ptr1,*ptr2;
    for(ptr=h;ptr!=NULL;ptr=ptr->next)
    {
        for(ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
        {
            if(ptr->data==ptr1->data)
            {
               cur=(struct node *)malloc(sizeof(struct node));
               cur->data=ptr->data;
               cur->next=NULL;
               if(*h1==NULL)
               {
                   *h1=cur;
                   ptr2=cur;
               }
               else
               {
                   ptr2->next=cur;
                   ptr2=cur;
               }
            }
        }
    }
}
void simp(struct node **h)
{
    struct node *ptr,*ptr1,*prev;
    ptr=*h;
    for(ptr=*h;ptr!=NULL;ptr=ptr->next)
    {
        prev=ptr;
        ptr1=ptr->next;
        while(ptr1!=NULL)
        {
            if(ptr1->data==ptr->data)
            {
                prev->next=ptr1->next;
                free(ptr1);
                ptr1=prev;
            }
            prev=ptr1;
            ptr1=ptr1->next;
        }
    }
}
void traverse(struct node *h)
{
    struct node *cur;
    cur=h;
    while(cur!=NULL)
    {
        printf("%d ",cur->data);
        cur=cur->next;
    }
}
void main()
{
    struct node *a=NULL,*b=NULL,*c=NULL,*d=NULL;
    int n,n1,i;
    printf(" ENTER NO. OF ElEMENTS FOR FIRST LINKED LIST-> ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insert(&a,(i+1));
    }
    printf("ENTER NO. OF ElEMENTS FOR SECOND LINKED LIST-> ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        insert(&b,(i+1));
    }
    printf("\nTHE FIRST NODE IS -> ");
    traverse(a);
    printf("\nTHE SECOND NODE IS -> ");
    traverse(b);
    match(a,b,&d);
    common(d,&c);
    simp(&c);
    simp(&d);
    printf("\nElements that are common in both A and B is -> ");
    traverse(c);
    printf("\n");
    getch();
}