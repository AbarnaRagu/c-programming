#include <stdio.h>
#include<stdlib.h>
typedef struct node1*node;
struct node1
{
    int element;
    node next;
};
node start=NULL;
void create()
{
    int ch;
    node new,temp;
    do{
    new=(node)malloc(sizeof(node));
    printf("\n enter the element:");
    scanf("%d",&new->element);
    new->next=NULL;
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
        
    }
    }
    while(ch==1);
    
}
void print()
{
    node temp;
    temp=start;
    printf("\n elements are:");
    while(temp!=NULL)
    {
        printf("\n%d",temp->element);
        temp=temp->next;
    }
}
int find(int element)
{   int count=0;
    node temp;
    temp=start;
    while(temp!=NULL)
    {
        if(temp->element==element)
           return ++count;
           count++;
           temp=temp->next;
    }
}
int find_prev(int element)
{
    int count=0;
    node temp1;
    node temp=start;
    while(temp!=NULL)
    {
        while(temp->element==element)
        {
            temp1=temp;
            temp=temp->next;
       }
       return temp1->element;
    }
    return -1;
}
void insbeg(int element)
{
    node new;
    new=(node)malloc(sizeof(node));
    new->element=element;
    new->next=start;
    start=new;
}
void insmid(int element)
{   int pos,i;
    printf("\n enter the position to be inserted:");
    scanf("%d",&pos);
    node new,temp;
    new=(node)malloc(sizeof(node));
    new->element=element;
    new->next=NULL;
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
  temp->next=new;
 printf("\n node inserted");
}

void insend(int element)
{
    node new,temp;
    temp=start;
    new=(node)malloc(sizeof(node));
    new->element=element;
    new->next=NULL;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->next=new;
}
void delbeg()
{
    node temp;
    temp=start;
    start=start->next;
    free(temp);
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
        printf("\n enter the choice\n1.create \n2.print \n3.find\n4.find_prev\n5.insert\n6.delete");
        scanf("%d",&choice);
        switch(choice)
    {
    case 1:create();break;
    case 2:print();break;
    case 3:printf("\n enter the element to be found:");
           scanf("%d",&element);
           if(find(element)!=0)
           printf("\n element %d is found in position %d ",element,find(element));
           else
           printf("\n element not found");break;
           
    case 4:printf("\n enter the element:");
           scanf("%d",&element);
           if(find_prev(element)!=-1)
               printf("\n%d",find_prev(element));
           else
           printf("\n error");
           break;
           printf("\n%d",element);break;
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
