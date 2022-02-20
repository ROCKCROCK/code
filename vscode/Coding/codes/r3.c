#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int num;
    struct node *next;
}list;

int no_elements_list = 0;
struct node *last_node;

void create_list();
void display_list();
void insert_element();
void delete_element_pos();
void delete_element_value();
void check_empty_list();
void search_element();
void traverse_forward();
void traverse_backward();

int main()
{
    list.prev = NULL;
    list.num = 1;
    list.next = NULL;
    last_node = &list;

    printf("\n1) Create list\n");
    printf("2) Display list\n");
    printf("3) Insert an element at any position\n");
    printf("4) Delete an element from any position\n");
    printf("5) Delete a node for the given key\n");
    printf("6) Display no. of elements/nodes in the list\n");
    printf("7) Check if the list is empty\n");
    printf("8) Search for an element in the list\n");
    printf("9) Traverse forward\n");
    printf("10) Traverse backward\n");
    printf("0) Exit\n");

    int choice;
    do
    {
        printf("\nEnter your choice :\t");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                    create_list();
                    break;
            case 2:
                    display_list();
                    break;
            
            case 3:
                    insert_element();
                    break;
            
            case 4:
                    delete_element_pos();
                    break;
            
            case 5:
                    delete_element_value();
                    break;
            
            case 6:
                    printf("\nNo. of elements/nodes in the linked list :\t%d", no_elements_list);
                    printf("\n---------------------------------------------------");
                    break;
            
            case 7:
                    check_empty_list();
                    break;
            
            case 8:
                    search_element();
                    break;
            
            case 9:
                    traverse_forward();
                    break;
            
            case 10:
                    traverse_backward();
                    break;
                        
            case 0:
                    break;
                            
            default:
                    printf("\nInvalid Input\n");
                    printf("\n---------------------------------------------------");
                    break;
        }
    }while(choice != 0);

    return 0;
}

//Function for creating the doubly linked list
void create_list()
{
    int n;
    printf("Enter the no. of elements in the list :\t");
    scanf("%d", &n);

    printf("Enter the numbers :\n");
    for(int i=0; i<n; i++)
    {
        (last_node -> next) = (struct node *)malloc(sizeof(struct node));
        ((last_node -> next) -> prev) = last_node;
        last_node = (last_node -> next);
        scanf("%d", &(last_node -> num));
        (last_node -> next) = NULL;
        no_elements_list++;
    }
    printf("\n---------------------------------------------------");
}

//Function for displaying the doubly linked list
void display_list()
{
    struct node *slide = &list;
    if((slide -> next) != NULL)
    {
        printf("\nList :\n");
        while((slide -> next) != NULL)
        {
            slide = (slide -> next);
            printf("%d", (slide -> num));
            if((slide -> next) != NULL)
                printf(" -> ");
        }
    }
    else
        printf("There is no element in the list yet.\n");
    printf("\n---------------------------------------------------");
}

//Function for inserting an element at a given position in a doubly linked list
void insert_element()
{
    int pos;
    printf("Enter the position at which you want to add the element :\t");
    scanf("%d", &pos);

    if(pos < 1 || pos > (no_elements_list + 1))
        printf("\nInvalid Input\n");
    else
    {
        struct node *temp, *slide = &list;
        for(int i=0; i<(pos-1); i++)
            slide = slide -> next;
        
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter the number :\t");
        scanf("%d", &(temp -> num));
        temp -> next = slide -> next;
        (slide -> next) -> prev = temp;
        slide -> next = temp;
        temp -> prev = slide;

        if(pos == (no_elements_list +1))
            last_node = (last_node -> next);
        
        no_elements_list++;
    }
    printf("\n---------------------------------------------------");
}

//Function for deleting an element
void delete_element_pos()
{
    if(list.next == NULL)
        printf("There is no element in the list yet.\n");
    else
    {
        int pos;
        printf("Enter the position of element you want to delete :\t");
        scanf("%d", &pos);

        if(pos < 1 || pos > no_elements_list)
            printf("\nThere is no element at this position in the list.\n");
        else
        {
            struct node *slide = &list;
            for(int i=0; i<(pos); i++)
                slide = slide -> next;
            
            if(pos == no_elements_list)
                last_node = (slide -> prev);

            (slide -> prev) -> next = slide -> next;
            (slide -> next) -> prev = slide -> prev;
            free(slide);
            no_elements_list--;
        }
    }
    printf("\n---------------------------------------------------");
}

//Function for deleting an element for the given key
void delete_element_value()
{
    if(list.next == NULL)
        printf("The list is empty\n");
    else
    {
        int key;
        printf("\nEnter the key :\t");
        scanf("%d", &key);

        struct node *slide = list.next;
        while(slide != NULL)
        {
            if(slide->num == key)
            {
                if(slide->next == NULL)
                    last_node = last_node->prev;

                (slide->prev)->next = slide->next;
                (slide->next)->prev = slide->prev;
                free(slide);
                no_elements_list--;
                break;
            }

            slide = slide->next;
        }
    }
    printf("\n---------------------------------------------------");
}

//Function for checking if the list is empty
void check_empty_list()
{
    if(list.next == NULL)
        printf("\nThe list is empty\n");
    else
        printf("\nThe list is not empty\n");
    
    printf("\n---------------------------------------------------");
}

//Function for searching an element
void search_element()
{
    int value;
    printf("\nEnter the element you want to search :\t");
    scanf("%d", &value);

    struct node *slide = list.next;
    for(int i=1; slide != NULL; i++)
    {
        if(slide->num == value)
            printf("\nThe value is present at %d position\n", i);
        
        slide = slide->next;
    }

    printf("\n---------------------------------------------------");
}

void traverse_forward()
{
    if(list.next == NULL)
        printf("The list is empty\n");
    else
    {
        struct node *slide = list.next;
        printf("\nCurrently I am at first node. Enter the no. of positions to move forward :\t");
        int pos;
        scanf("%d", &pos);
        if(pos>=0 && pos<no_elements_list)
        {
            for(int i=0; i<pos; i++)
                slide = slide->next;
            
            printf("\nI arrived at %d node, and the value stored in it is %d", (pos+1), slide->num);
        }
        else
            printf("\nInvalid input\n");
    }
    printf("\n---------------------------------------------------");
}

void traverse_backward()
{
    if(list.next == NULL)
        printf("The list is empty\n");
    else
    {
        struct node *slide = list.next;
        while(slide->next != NULL)
            slide = slide->next;
        printf("\nCurrently I am at last node. Enter the no. of positions to move backward :\t");
        int pos;
        scanf("%d", &pos);
        if(pos>=0 && pos<no_elements_list)
        {
            for(int i=0; i<pos; i++)
                slide = slide->prev;
            
            printf("\nI arrived at %d node, and the value stored in it is %d", (no_elements_list - pos), slide->num);
        }
        else
            printf("\nInvalid input\n");
    }
    printf("\n---------------------------------------------------");
}
