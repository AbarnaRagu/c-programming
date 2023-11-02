#include <stdio.h>
int main() {
    int a[5],n,i,j;
    printf("\n enter total elements");
    scanf("%d",&n);
    printf("\n enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n the elements are:");
    
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\nthe duplicate elements are");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            printf(" %d",a[i]);
        }
    }
    return 0;
}
