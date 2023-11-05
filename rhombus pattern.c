#include <stdio.h>
void rhombus(int n)
{
        int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }

}
void hollowrhombus(int n)
{
        int i,j,k;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            if(i==1||i==n||k==1||k==n)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

}
int main()
{   int n,choice,ch;
    printf("\n enter no of rows:");
    scanf("%d",&n);
    do{
        printf("\n enter the choice\n1.solid rhombus\n2.hollow rhombus:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:rhombus(n);break;
            case 2:hollowrhombus(n);break;
        }
        printf("\n press 1 to continue:");
        scanf("%d",&ch);
    }
    while(ch==1);
    return 0;
}
