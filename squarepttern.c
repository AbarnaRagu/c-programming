/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void solidsquare(int n)
{    
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void hollowsquare(int n)
{    
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   
            if(i==0||i==n-1||j==0||j==n-1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}

void main()
{
    int n,choice,ch;
    printf("\n enter the no of rows:");
    scanf("%d",&n);
    do{
        printf("\n enter choice\n1.solid\n2.hollow");
        scanf("%d",&choice);
        switch(choice)
        {
    case 1:solidsquare(n);break;
    case 2:hollowsquare(n);break;
}
printf("\n press 1 to continue:");
scanf("%d",&ch);
}
while(ch==1);
}
