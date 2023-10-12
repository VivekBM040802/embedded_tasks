#include <stdio.h>

int compstr(char s1[30], char s2[20])
{
    int flag=0,i=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
        }
        i++;
    }
    if(flag==0)
    return 0;
    else if(flag==1)
    return 1;
}
int main() {
char s1[30],s2[30];
printf("Enter the String 1:");
scanf("%s",s1);
printf("Enter the String 2:");
scanf("%s",s2);
int c = compstr(s1,s2);
if(c==0)
printf("Two strings are same!");
else
printf("Two strings are different!");
    return 0;
}
