#include <stdio.h>
void swap(int*,int*);
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a=5,b=10;
    printf("before swapping a=%d and b=%d",a,b);
    swap(&a,&b);
 printf("\nafter swapping a=%d and b=%d",a,b);
    return 0;
}
