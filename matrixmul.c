#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a[10][10],b[10][10],c[10][10],sum,i,j,k,r1,c1,r2,c2;
    printf("\n enter the size of row a:");
    scanf("%d",&r1);
    printf("\n enter the size of column a:");
    scanf("%d",&c1);
    printf("\n enter first matrix:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter the size of row b:");
    scanf("%d",&r2);
    printf("\n enter the size of column b:");
    scanf("%d",&c2);
    printf("\n enter second matrix:");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
        for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
        for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(c2!=r2)
    {
        printf("\n cannot multiply:");
    }
        else
        {
            
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                sum=0;
                for(k=0;k<r1;k++)
                {
                    sum=sum+(a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
    printf("\nmultiplication of matrix a and b is:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}
}
