#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char s[20],infix[20],postfix[20];
int top=-1;
void push(char element)
{
    s[++top]=element;
}
char pop()
{
    top--;
    return s[top+1];
}
int pr(char elem)
{
    switch(elem)
    {
        case '#':return 0;break;
        case '(':return 1;break;
        case '+':
        case '-':return 2;break;
        case  '*':
        case '/':return 3;break;
    }
    }
    void infixtopostfix(char *infix,char *postfix)
    {   char ch;
        int i=0,k=0;
        push('#');
        while((ch=infix[i++])!='\0')
        {
            if(ch=='(')
             push(ch);
            else if(isalnum(ch))
                 postfix[k++]=ch;
             else if(ch==')')
             {
                 while(s[top]!='(')
                 postfix[k++]=pop();
                 pop();
             }
             else
             {
                 while(pr(s[top])>=pr(ch))
                 {
                 postfix[k++]=pop();
             }
             push(ch);
             }
        }
             while(s[top]!='#')
             {
                 postfix[k++]=pop();
                 postfix[k]='\0';
            }
}
void main()
{   int n,i;
    printf("\n enter the infix expression:");
    scanf("%s",infix);
   infixtopostfix(infix,postfix);
    printf("postfix expression is:%s",postfix);
}
