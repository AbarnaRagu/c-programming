#include <stdio.h>
int main() {
    int num,i,mul;
    printf("\n enter the number:");
    scanf("\n%d",&num);
    for(i=1;i<=10;i++)
    {
        mul=num*i;
    printf("\n%dx%d=%d",num,i,mul);
    }
    return 0;
}
