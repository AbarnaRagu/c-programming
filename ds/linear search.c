/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
void main()
{
   int a[10],n,i,element,loc;
   printf("\n enter the total elements");
   scanf("%d",&n);
   printf("\n enter the elements");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\n enter the element to be searched:");
   scanf("%d",&element);
   for(i=0;i<n;i++)
   {
       if(a[i]==element)
       loc=i+1;
   }
    if(loc!=-1)
    printf("element %d is found in position %d",element,loc);
    else
    printf("\n element not found");
}
