#include <stdio.h>

int main() {
    char s[20],ch,repl;
    int length=0,i=0;
    printf("Enter the String: ");
    scanf("%s",s);
    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    printf("The length of the string is %d",length);
    
    return 0;
}
