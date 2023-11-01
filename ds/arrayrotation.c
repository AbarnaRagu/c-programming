/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int temp,a[5],n,i,k,j;
    printf("enter total elements:");
    scanf("%d",&n);
        printf("\n enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the no of rotation:");
    scanf("%d",&k);
    printf("\n elements in array");
    for(i=0;i<n;i++)
    {
    printf("\n%d",a[i]);
    }
    for(i=0;i<k;i++)
    {
        temp=a[n-1];
        for(j=n-1;j>0;j--)
    {
   a[j]=a[j-1];
      }
   a[0]=temp;
 }
    printf("\n elements after rotation is:");
    for(i=0;i<n;i++)
    {
    printf(" %d",a[i]);
    }
    return 0;
}
