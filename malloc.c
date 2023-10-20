#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("\n enter the no of values:");
    scanf("%d",&n);
    ptr=malloc(sizeof(int));
    printf("\n enter the values:");
    for(i=0;i<n;i++)
    {
    scanf("%d",ptr+i);
}
printf("\n the values are:");
for(i=0;i<n;i++)
{
    printf("\n%d",*(ptr+i));
    
}
    return 0;
}
