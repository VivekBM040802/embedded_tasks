#include <stdio.h>

int main()
{
    int n,i,j,a[10][10];
    
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                a[i][j]=i+1;
                printf("%d",a[i][j]);
            }
        }
        printf("\n");
    }
    

    return 0;
}
