#include <stdio.h>

int main()
{
    int a[20],i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        a[i] = a[i]+15;
    }
    printf("The array is elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
