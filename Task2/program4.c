#include <stdio.h>

int main()
{
    int a[20],key,i,n,index;
    printf("Enter the number of elements of arrays : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the number to be found : ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
        index=i;
        break;
        }
    }
    
    if(index>0)
    printf("Number was found at index %d",index);
    else
    printf("Number not found");
}
