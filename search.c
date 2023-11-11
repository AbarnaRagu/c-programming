#include <stdio.h>
 int main()
{
    int a[10],i,n,search;
   
    printf("Enter total elements: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter element to search: ");
    scanf("%d", &search);
     
    for(i=0; i<n; i++)
    {
        if(a[i]==search)
        {
	    printf("%d found at position %d",search, i+1);
            return 0;		 
        } 
    }
	printf("Element  not  found");
}
