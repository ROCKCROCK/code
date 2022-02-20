#include <stdio.h>

int a[100];
int size;
void display();
void insert();
void delete();
void sort();

void main()
{
    int ch;
    printf("Enter size of array to perform different operations : ");
    scanf("%d", &size);
    printf("Enter %d elements of array : ", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n----------------\n1.Display of array elements\n2.Insert element at a given position\n3.Delete an element at a given position\n4.Sort the Array\n5. EXIT");   
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            {
                display();
                break;
            }

            case 2:
            {
                insert();
                display();
                break;
            }
            case 3:
            {
                delete();
                display();
                break;
            }
            case 4:
            {
                sort();
                display();
                break;
            }
            case 5:
            {
                printf("\n------------------CODE EXITED----------------");
                break;
            }
            default:
            {
                printf("*** Invalid choice ***");       
            }
        }
    }while(ch != 5);
    //printf("\n-------------------CODE EXITED------------------");

}   

void  display()
{   
        printf("\nArray elements are: ");
        for (int i = 0; i < size; i++)
            printf("%d ", a[i]);
}   

void  insert()
{   
    int temp, pos;
    do
    {
        printf("\nEnter index where elemnt to be inserted: ");
        scanf("%d",&pos);
        
    } while (pos > size);   
    printf("\nEnter element to be inserted: ");
        scanf("%d", &temp);
    for(int i=size-1; i>=pos; i--)
    {
        a[i+1] = a[i];
    }
    a[pos] = temp;
    size += 1;
}

void delete()
{
    int pos;
    do
    {
       printf("\nEnter element position to be deleted : ");
        scanf("%d", &pos);
    } while (pos > size);    
    
    for(int i=pos; i<size; i++)
        a[i] = a[i+1];
    size -= 1;

}

void sort()
{
    int min, tempMin;
    for(int i=0; i<size-1; i++)
    {
        min = i;
        for(int j=i+1; j<size; j++)
        {
            if(a[min] > a[j])
                min = j;
        }
        tempMin = a[min];
        a[min] = a[i];
        a[i] = tempMin;
    }
}