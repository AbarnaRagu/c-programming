#include <stdio.h>
#include<string.h>

int main()
{  char string[20];
  int count,i;
   printf("\n enter the string:");
   scanf("%s",string);
   count=strlen(string);
   for(i=0;i<count;i++)
   {
   printf("\n%c",string[i]);
   
   }return 0;
}
