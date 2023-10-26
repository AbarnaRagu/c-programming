#include <stdio.h>
#include<stdlib.h>
typedef struct node1*node;
struct node1
{   node prev;
    int element;
    node next;
};
node start=NULL;
node last=NULL;
void create()
{
    int ch;
    node new,temp;
    do{
    new=(node)malloc(sizeof(node));
    printf("\n enter the element:");
    scanf("%d",&new->element);
    if(start==NULL)
    {
        start=new;
    }
    else
    {
        temp=start;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=new;
        new->prev=last;
    }
        last=new;
        printf("\n do you want to continue press 1");
        scanf("%d",&ch);
    }
    while(ch==1);
}
void print1()
{
    node temp;
    temp=start;
    last->next=NULL;
    printf("\n elements from first are:");
    while(temp!=NULL)
    {
        printf(" %d",temp->element);
        temp=temp->next;
    }
}
void print2()
{
    node temp=last;
    start->prev=NULL;
    printf("\n element from last are");
    while(temp!=NULL)
    {
        printf(" %d",temp->element);
        temp=temp->prev;
    }
}
int find(int element)
{   int count=1;
    node temp;
    temp=start;
    node temp1=last;
    while((temp!=NULL)&&(temp1!=NULL))
    {
        if(temp->element==element)
           return count;
           count++;
           temp=temp->next;
    }
}
void insbeg(int element)
{
    node new;
    new=(node)malloc(sizeof(node));
    new->element=element;
    new->next=start;
    start->prev=new;
    start=new;
}
void insmid(int element)
{   int pos,i;
    printf("\n enter the position to be inserted:");
    scanf("%d",&pos);
    node new,temp;
    new=(node)malloc(sizeof(node));
    new->element=element;
   temp=start;
  for(i=1;i<pos-1;i++)
  {
      temp=temp->next;
      if(temp==NULL)
      {
          printf("\ncant insert");
      }
  }
  new->next=temp->next;
  new->prev=temp;
  temp->next->prev=new;
  temp->next=new;
 printf("\n node inserted");
}
void insend(int element)
{
    node new;
    new=(node)malloc(sizeof(node));
    new->element=element;
    new->next=NULL;
    new->prev=last;
    last->next=new;
    last=new;
}
void insert(int element)
{
    int choice;
    printf("\n enter the choice\n1.insertion at begining\n2.insertion at mid\n3.insertion at end:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:insbeg(element);break;
        case 2:insmid(element);break;
        case 3:insend(element);break;
    }
}
void delbeg()
{
    node temp;
    temp=start;
    start=start->next;
    start->prev=NULL;
    free(temp);
}

void deleter()
{  
    int i,pos;
    printf("\n enter the position to be deleted:");
    scanf("%d",&pos);
    node temp1,temp;
    temp=start;
    for(i=1;i<pos;i++)
    { 
        temp1=temp;
        temp=temp->next;
        if(temp==NULL)
        {
            printf("\ncant delete");
        }
    }
    temp1->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);    
}
void delete()
{
    int choice,pos;
        printf("\n enter the choice\n1.deletion at begining\n2.deletion at mid\n3.deletion at end:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:delbeg();break;
        case 2:deleter();break;
        case 3:deleter(pos);break;
    }
}
void main()
{
    int ch,choice,pos;
    int element,temp;
    do{
        printf("\n enter the choice\n1.create \n2.print1 \n3.print2\n4.find\n5.insert\n6.delete");
        scanf("%d",&choice);
        switch(choice)
    {
    case 1:create();break;
    case 2:print1();break;
    case 3:print2();break;
    case 4:printf("\n enter the element to be found:");
           scanf("%d",&element);
           if(find(element)!=0)
           printf("\n element %d is found in position %d ",element,find(element));
           else
           printf("\n element not found");break;
        case 5:printf("\n enter the element to be inserted:");
           scanf("%d",&element);
           insert(element);break;
        case 6:delete();break;
          default:exit(0);
    }
    printf("\n do you want to continue press 2");
    scanf("%d",&ch);
    }
    while(ch==2);
}
