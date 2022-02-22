// C program for the operations in the Singly Linked List
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node 
{
	int info;
	struct node* link;
};
struct node* start = NULL;
void checkEmpty()
{
	if (start == NULL)
		printf("\nList is empty\n");
	else
		printf("\nList is not empty\n");
}
void traverse()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");

	else 
	{
		temp = start;
		while (temp != NULL) 
		{
			printf("Data = %d\n",
				temp->info);
			temp = temp->link;
		}
	}
}



void insertAtPosition()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = (struct node*)malloc(sizeof(struct node));

	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);

	temp = start;
	newnode->info = data;
	newnode->link = NULL;
	while (i < pos - 1) 
	{
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}


void deletePosition()
{
	struct node *temp, *position;
	int i = 1, pos;

	if (start == NULL)
		printf("\nList is empty\n");

	else 
	{
		printf("\nEnter index : ");

		scanf("%d", &pos);
		position = (struct node*)malloc(sizeof(struct node));
		temp = start;

		while (i < pos - 1) 
		{
			temp = temp->link;
			i++;
		}

		position = temp->link;
		temp->link = position->link;
		free(position);
	}
}
int countNodes() 
{  
    int count = 0;  
    struct node *current = start;  
      
    while(current != NULL) 
	{  
        count++;  
        current = current->link;  
    }  
    return count;  
}  

bool search(int x)
{
    struct node* current = start;  // Initialize current
    while (current != NULL)
    {
        if (current->info == x)
            return true;
        current = current->link;
    }
    return false;
}
void deleteKey(int key)
{
    struct node *temp = start,*prev;
 
    while (temp != NULL && temp->info == key)
    {
        start = temp->link; 
        free(temp); 
        temp = start; 
    }

    while (temp != NULL)
    {
        while (temp != NULL && temp->info != key)
        {
            prev = temp;
            temp = temp->link;
        }

        if (temp == NULL)
            return;

        prev->link = temp->link;
 
        free(temp);
        temp = prev->link;
    }
}

int main()
{
	int choice;
	while (1) 
	{

		printf("\n\t1 To see list\n");
		
		printf("\t2 For insertion at "
			"any position\n");
		
		printf("\t3 For deletion of "
			"element at any position\n");
           
		printf("\t4 To find the number of nodes \n");
		printf("\t5 To search for a given element in the list\n");
		printf("\t6 To delete a node for a given key\n");
		printf("\t7 To check if the list is empty \n");
		printf("\t8 To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);

		switch (choice) 
		{
		case 1:
			traverse();
			break;
		
		case 2:
			insertAtPosition();
			break;
		
		case 3:
			deletePosition();
			break;
	    case 4:
			printf("The number of nodes are : %d",countNodes());
			break;
		case 5:
			printf("Enter the key to be searched: ");
			int s;
			scanf("%d",&s);
			if(search(s))
			{
				printf("Element found in linked list");
			}
			else
			{
				printf("Element not found in linked list");
			}
			break;
		case 6:
			printf("Enter the key to be deleted: ");
			scanf("%d",&s);
			deleteKey(s);
			break;
		case 7:
			checkEmpty();
			break;
		case 8:
			exit(1);
			break;
		default:
			printf("Incorrect Choice\n");
		}
	}
	return 0;
}