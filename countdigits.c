
#include <stdio.h>

int main()
{
   int n,count=0;
   printf("\n enter number");
   scanf("%d",&n);
   while(n!=0)
   {
       n=n/10;
       count++;
   }
   printf("\n count is %d",count);
    return 0;
}
