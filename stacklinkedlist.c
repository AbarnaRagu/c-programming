#include<stdio.h>
#include<stdlib.h>
typedef struct node1*node;
struct node1
{
    int element;
    node next;
};
node create()
{
    node s;
    s=(node)malloc(sizeof(node));
    if(s==NULL)
        printf("\n out of space");
    else
    s->next=NULL;
    return s;
}
void push(int element,node s)
{
    node new;
    new=(node)malloc(sizeof(node));
    if(new==NULL)
        printf("\n out of space");
    else
    {
    new->element=element;
     new->next=s->next;
     s->next=new;
    }
}
void pop(node s)
{   
    node temp;
    if(s->next==NULL)
    
        printf("\n empty");
    else
    {
        temp=s->next;
        s->next=temp->next;
        free(temp);
        printf("\n popped successfully");
    }
}
void top(node s)
{
    if(s->next==NULL)
        printf("\n empty");
    else
    {
      printf("\n %d",s->next->element);
    }
}
void print(node s)
{
    node temp=s->next;
    printf("\n the elements in stack are");
    do
    {
    printf("\n%d",temp->element);
    temp=temp->next;
    }
    while(temp!=NULL);
}
void main()
{
    int ch,choice,element;
    node s;
    s=create();
    do{
    printf("\n enter the choice\n1.push\n2.pop\n3.top\n4.print");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\n enter the element to be inserted");
               scanf("%d",&element);
               push(element,s);break;
        case 2:pop(s);break;
        case 3:top(s);break;
        case 4:print(s);break;
    }
    printf("\n press 1 to continue");
    scanf("%d",&ch);
    }
    while(ch==1);
}
