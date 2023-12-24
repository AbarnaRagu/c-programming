#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("\n enter the positive integer ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
    }
printf("\nsum is %d",sum);
    return 0;
}
