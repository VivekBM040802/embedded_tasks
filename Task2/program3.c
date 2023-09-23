#include <stdio.h>

int main()
{
    int a[20],b[20],c[20],i,n;
    printf("Enter the number of elements of arrays : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d of array 1 : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d of array 2 : ",i+1);
        scanf("%d",&b[i]);
    }
    
    
    for(i=0;i<n;i++)
    {
        c[i] = a[i]+b[i];
    }
    printf("Sum of the two arrays are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
}
