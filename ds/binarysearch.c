/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int binarysearch(int element)
{
   int a[10],n,i,mid,loc,high,low=0;
   printf("\n enter the total elements");
   scanf("%d",&n);
   high=n;
   printf("\n enter the elements");
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
  while(low<=high)
  {
      mid=(low+high)/2;
      if(element<a[mid])
      high=mid-1;
      else if(element>a[mid])
      low=mid+1;
      else if(element==a[mid])
      return mid;
  }
  return -1;
}
void main()
{   int result,element;
   printf("\n enter the element to be searched:");
   scanf("%d",&element);
   result=binarysearch(element);
    if(result!=-1)
    {
        printf("\n element %d is found in position %d",element,result);
    }
    else
    printf("\n element not found");
}
