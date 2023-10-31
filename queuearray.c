#include<stdio.h>
#include<stdlib.h>
int rear=-1;
int front=-1;
queue[10];
void enqueue(int element)
{
    if(rear>10)
    {
        printf("\n queue is full");
    }
    else if(rear==-1&&front==-1)
    {
        rear=front=0;
        queue[rear]=element;
    }
    else{
        rear++;
    queue[rear]=element;
}
}
void dequeue()
{
    if(rear==-1||front>rear)
    {
        printf("\nqueue is empty");
    }  
    else
      front++;
      printf("\n deleted successfully");
}
void print()
{   int i;
    if(rear==-1&&front==-1)
    {
        printf("\n queue is empty");
    }
        else
        {   printf("\n elements are:");
            for(i=front;i<rear+1;i++)
            printf("\n%d",queue[i]);
        }
}
void main()
{
    int choice,ch,element;
    do
    {
    printf("\n enter the choice\n1.enqueue\n2.dequeue\n3.print");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("\n enter element to be inserted");
               scanf("%d",&element);
               enqueue(element);break;
        case 2:dequeue();break;
        case 3:print();break;
        default:exit(0);
    }
    printf("\n do you want to continue press 1");
    scanf("%d",&ch);
    }
    while(ch==1);
}
