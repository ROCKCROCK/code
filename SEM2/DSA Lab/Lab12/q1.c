#include <stdio.h>
void main()
{
    int n, i, c = 0;
    printf("enter size of array->");
    scanf("%d", &n);
    int a[n];
    printf("enter 0's and 1's->\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            c++;
        }
    }
    for (i = 0; i < c; i++)
    {
        a[i] = 0;
    }
    for (i = c; i < n; i++)
    {
        a[i] = 1;
    }
    printf("Displaying->\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
