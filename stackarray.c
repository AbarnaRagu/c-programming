#include<stdio.h>
#include<stdlib.h>
#define Max_size 10;
int top=-1;
int stack[10];
void push(int element)
{
    if(top>10)
    
        printf("\n stack overflow");
        else
        
         stack[++top]=element;        
}
void pop()
{
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else
    top--;
}
void Top()
{
    if(top==-1)
    printf("\n stack is empty");
    else
    printf("%d",stack[top]);
}
void print()
{   int i;
    if(top==-1)
        printf("\n stack is empty");
        else
        {   printf("\n elements in stack are:");
            for(i=top;i>=0;i--)
            printf(" %d",stack[i]);
        }
}
void main()
{   
    int ch,choice,element;
    do{
    printf("\n enter the choice\n1.push\n2.pop\n3.top\n4.print");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\n enter the element");
        scanf("%d",&element);
        push(element);break;
        case 2:pop();break;
        case 3:Top();break;
        case 4:print();break;
        
    }
    printf("\n do you want to continue press 1");
    scanf("%d",&ch);
    }
    while(ch==1);
}
