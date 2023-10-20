#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr;
    printf("\n enter the no of values:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
   printf("\n enter the values:");
    for(i=0;i<n;i++)
    {
    scanf("%d",ptr+i);
    }
 printf("\n enter the updated n");
 scanf("%d",&n);
 int*ptr1=(int*)realloc(ptr,n*sizeof(int));
 printf("\nprevious address:%d new address:%d",ptr,ptr1);
 
printf("\n the values are:");
for(i=0;i<n;i++)
{
    printf("\n%d",*(ptr1+i));
}   
free(ptr);
    return 0;
}

