#include <stdio.h>
int main() {
    int a,b,i,gcd,lcm;
    printf("\n enter the two numbers:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0&&b%i==0)
       gcd=i;
    }
    lcm=(a*b)/gcd;
    printf("\n lcm of %d and %d is %d",a,b,lcm);
 return 0;
}
