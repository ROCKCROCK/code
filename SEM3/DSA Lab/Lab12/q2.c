#include <stdio.h>
#include <stdlib.h>

void printrepeating(int A[], int S)
{
    int *count = (int *)calloc(sizeof(int), (S - 2));
    int f=0;
    printf("Repeating elements are : ");
    for (int i = 0; i < S; i++)
    {
        if (count[A[i]] == 1)
        {
            printf("%d\t", A[i]);
            f++;
        }
        else
        {
            count[A[i]]++;
        }
        if(f==2)
        {
            break;
        }
    }
}
int main()
{
    printf("Enter size of array(n-2) -> ");
    int n;
    scanf("%d", &n);
    printf("Enter  elements of the array -> \n");
    int A[n + 2];
    for (int i = 0; i < (n + 2); i++)
    {
        scanf("%d", &A[i]);
    }
    printrepeating(A,n+2);
    return 0;
}