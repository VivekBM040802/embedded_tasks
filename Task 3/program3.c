#include <stdio.h>

int main() {
    char s[20],ch,repl;
    int index;
    printf("Enter the String: ");
    scanf("%s",s);
    printf("Enter the index to be replaced: ");
    scanf("%d",&index);
    printf("Enter the letter: ");
    scanf(" %c",&ch);
    repl = s[index];
    s[index]=ch;
    printf("Replaced %c with %c!\n",repl,ch);
    printf("The Final String is %s",s);

    return 0;
}
