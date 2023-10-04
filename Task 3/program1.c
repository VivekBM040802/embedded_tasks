#include <stdio.h>
int main() {
    char s[20],ch;
    int i=0,index;
    printf("Enter the string : ");
    scanf("%s",s);
    printf("Enter the letter to be found : ");
    scanf(" %c",&ch);
    while(s[i]!='\0')
    {
        if(s[i]==ch)
        index=i;
        i++;
    }
    printf("Index of first occurrence : %d",index);
    return 0;
}
