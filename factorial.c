#include <stdio.h>
int main() {
    int i,num,fact=1;
    printf("\n enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial of %d is %d",num,fact);
    return 0;
}
