#include <stdio.h>

int main()
{
    int a[10][10];
    int i,j,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j] = 1;
            printf("%d",a[i][j]);
        }
      printf("\n"); 
    }
   return 0;
}
