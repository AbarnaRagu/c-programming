#include <stdio.h>
int main() {
    int a[5],n,i,max;
    printf("\n enter the total elements");
    scanf("%d",&n);
    printf("\n enter the  elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    max=a[0];
   for(i=0;i<n;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    printf("maximum element is %d",max);
      return 0;
}
