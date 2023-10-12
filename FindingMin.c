include <stdio.h>
int main() {
    int a[5],n,i,min;
    printf("\n enter the total elements");
    scanf("%d",&n);
    printf("\n enter the  elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    min=a[0];
   for(i=0;i<n;i++)
{
    if(a[i]<min)
    {
        min=a[i];
    }
    }
    printf("minimum element is %d",min);
      return 0;
}
