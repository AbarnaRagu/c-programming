
#include <stdio.h>

int main() {
    int num;
    printf("enter element:");
    scanf("%d",&num);
    if(num&1==1)
    {
    printf("number is odd");
    }
    else
    printf("\n number is even");

    return 0;
}
