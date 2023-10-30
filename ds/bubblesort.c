/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

void bubblesort(int n,int a[])
{ 
    
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
}
void main()
{   int i,n,a[10];
    printf("enter the total elements :");
    scanf("%d",&n);
    printf("\n enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(n,a);
    printf("\n elements after sorting are:");
    for(i=0;i<n;i++)
    printf(" %d",a[i]);
}
