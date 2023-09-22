#include <stdio.h>

int main()
{
    int a[10][10];
    int i,j,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            a[i][j] = j;
            printf("%d",a[i][j]);
        }
      printf("\n"); 
    }
   return 0;
}
