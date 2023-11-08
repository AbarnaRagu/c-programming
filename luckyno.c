
#include <stdio.h>

int main()
{
    int a,b,c,d,num;
    printf("\n enter number:");
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    if((a+b)==(c+d))
    {
        printf("\n lucky number");
    }
    else
    printf("not a lucky number");
    return 0;
}
