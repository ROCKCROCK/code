#include <stdio.h>
int main()
{
  int i, j, n,n1, c = 0;
  printf("enter no. of rows ->");
  scanf("%d", &n);
   printf("enter no. of  column->");
  scanf("%d", &n1);
  int a[n][n1];
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n1; j++)
    {
      printf("enter data for a[%d][%d]->", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("matrix is->\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n1; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n1; j++)
    {
      if (a[i][j] == 0)
      {
        c++;
      }
    }
  }
  if (c > (n * n1 * 0.4))
  {
    printf("Input Matrix is a Sparse Matrix\n");
  }
  else
  {
    printf("Input Matrix is not a Sparse Matrix\n");
  }
  return 0;
}