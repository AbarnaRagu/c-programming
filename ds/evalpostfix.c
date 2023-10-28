#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
char s[20],postfix[20];
int top=-1;
void push(int element)
{
    s[++top]=element;
}
char pop()
{
    top--;
    return s[top+1];
}
int evalpostfix(char *postfix)
{   char ch;
    int i=0,op1,op2;
    while((ch=postfix[i++])!='\0')
    {
        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else
        {
        op2=pop();
        op1=pop();
        switch(ch)
        {
            case '+':push(op1+op2);break;
            case '-':push(op1-op2);break;  
            case '*':push(op1*op2);break;
            case '/':push(op1/op2);break;
            case '^':push(op1^op2);break;
        }
        }
    }
return s[top];
}
void main()
{   int ans;
    printf("\n enter postfix expression:");
    gets(postfix);
    ans=evalpostfix(postfix);
    printf("\n %d",ans);
}
