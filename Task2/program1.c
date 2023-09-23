#include <stdio.h>

int main()
{
    int a[20],even_sum=0,odd_sum=0,i,n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even_sum+=a[i];
        }
        else
        {
            odd_sum+=a[i];
        }
    }
    printf("Sum of even numbers: %d\n",even_sum);
    printf("Sum of odd numbers: %d",odd_sum);
}
