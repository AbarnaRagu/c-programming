#include <stdio.h>
int main()
{
    int a[10],i,n,num,pos;
    printf("\n size of array:");
    scanf("%d",&n);
    printf("\n enter elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter the element to be inserted:");
    scanf("%d",&num);
    printf("\n enter the position to be inserted:");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
            }
    a[pos-1]=num;
    n++;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}
