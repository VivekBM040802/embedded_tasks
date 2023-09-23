#include <stdio.h>

int main()
{
    int a[20],i,n,rev[20];
    printf("Enter the number of elements of arrays : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    rev[n-i-1] = a[i];
    }
    printf("The inverted array elements are : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",rev[i]);
    }
    
}
