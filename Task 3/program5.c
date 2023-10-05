#include <stdio.h>

int main() {
   
   char s1[20],s2[20];
   int i=0;
   printf("Enter the String 1: ");
   scanf("%s",s1);
    printf("Enter the String 2: ");
   scanf("%s",s2);
   while(s2[i]!='\0')
   {
       s1[i]=s2[i];
       i++;
   }
   printf("String 1 : %s",s1);
   printf("String 2 : %s",s2);
   
    return 0;
}
