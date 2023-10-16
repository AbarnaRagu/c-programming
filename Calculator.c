#include <stdio.h>
int main() {
    int op,a,b,i;
    printf("\n enter the operand:");
    scanf("%c",&op);
    printf("\n enter a and b:");
    scanf("%d %d",&a,&b);
    switch(op)
    {
       case '+':printf("\n addition of %d and %d is %d",a,b,a+b);break;
      case '-':printf("\n subtraction of %d and %d is %d",a,b,a-b);break;
case '*':printf("\n multiplication of %d and %d is %d",a,b,a*b);break;
case '/':printf("\n division of %d and %d is %d",a,b,a/b);break;
case '%':printf("\n modulo of %d and %d is %d",a,b,a%b);break;
default:
printf("\n error");
    }
    return 0;
}
