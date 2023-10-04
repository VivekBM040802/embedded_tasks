#include <stdio.h>
int main() {
    char s[20],ch;
    int i=0,count=0;
    printf("Enter the string : ");
    scanf("%s",s);
    printf("Enter the letter to be found : ");
    scanf(" %c",&ch);
    while(s[i]!='\0')
    {
        if(s[i]==ch)
        count++;
        i++;
    }
    if(count>0)
    printf("Number of occurrence of %c is %d",ch,count);
    else
    printf("Letter not found in the string!");
    return 0;
}
