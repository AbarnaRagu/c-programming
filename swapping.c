#include<stdio.h>
int main()
{
  int  a,b,temp;
printf("\n enter the value of a:");
scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\nbefore swapping value of a is %d,b is %d",a,b);
temp=a;
a=b;
b=temp;
printf("\nafter swapping value of a is %d,b is %d",a,b);
}
