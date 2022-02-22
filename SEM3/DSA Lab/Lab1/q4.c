#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *p,n,t;
      printf("Enter the size of the array : ");
      scanf("%d",&n);
      p=(int *)malloc(n*sizeof(int));
      printf("\nEnter %d Numbers: ",n);
      for(int i=0;i<=n-1;i++)
      {
            scanf("%d", (p+i));
      }
      for(int i=0;i<n;i++)
      {
            for(int j=0;j<=i;j++)
            {
                  if((p[i])<(p[j]))
                  {
                        t=(p[i]);
                        (p[i])=(p[j]);
                        (p[j])=t;
                  }
            }
      }
      printf("\nAfter Sorting in Ascending Order: \n");
      printf("\n");
      for(int i=0;i<n;i++)
      {
        printf("%d ",p[i]);
      }
    return 0;
}
