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
    printf("\n enter the position to be deleted:");
    scanf("%d",&pos);
    if(pos<=0||pos>=n+1)
    {
        printf("error");
            }
    else{
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
return 0;
}
