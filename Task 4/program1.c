#include <stdio.h>

int main() {
   
   char s1[20],s2[20];
   int i=0,j=0,len=0;
   printf("Enter the String 1: ");
   scanf("%s",s1);
   printf("Enter the String 2: ");
   scanf("%s",s2);
   while(s1[i]!='\0')
   {
       len++;
       i++;
   }
   printf("Before concatenation:\n");
   printf("String 1: %s\n",s1);
   printf("String 2: %s\n",s2);
   while(s2[j]!='\0')
   {
       s1[len+j]=s2[j];
       j++;
   }
   printf("After concatenation:\n");
  printf("String 1: %s\n",s1);
  printf("String 2: %s\n",s2);
   
    return 0;
}
