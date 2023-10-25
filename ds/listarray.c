#include<stdio.h>
#include<stdlib.h>
int list[5],i,n;
void create()
{
    printf("\n enter total elements:");
    scanf("%d",&n);
    printf("\n enter the elements");
    for(i=0;i<n;i++)
    scanf("%d",&list[i]);
}
void print()
{   printf("\n element in list are:");
    for(i=0;i<n;i++)
    printf(" %d",list[i]);

}
void makenull()
{
    for(i=0;i<n;i++)
    {
        list[i]=NULL;
    }
}
int find(int element)
{ 
    for(i=0;i<n;i++)
    {
        if(list[i]==element)
            return i;
    }
        return -1;
}
void insert(int element,int pos)
{
    for(i=n;i>=pos-1;i--)
        list[i+1]=list[i];
        list[pos]=element;
        n++;
}
void delete(int pos)
{   
    for(i=pos-1;i<=n;i++)
        list[i]=list[i+1];
        n--;
}
void main()
{   int element,choice,ch,pos;
do
{
    printf("\n enter the choice\n1.create\n2.print\n3.makenull\n4.find\n5.insert\n6.delete");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:create();break;
        case 2:print();break;
        case 3:makenull();break;
        case 4:printf("\n enter the element to be found");
               scanf("%d",&element);
               if(find(element)!=-1)
               {
                   printf("\n element %d is found in position %d",element,i+1);
               }
               else
               printf("\nnot found");break;
        case 5:printf("\n enter the element to be inserted");
               scanf("%d",&element);
               printf("\n enter the position to be inserted");
               scanf("%d",&pos);
               insert(element,pos);break;
               case 6:printf("\n enter the position to be deleted");
               scanf("%d",&pos);
               delete(pos);break;
    }printf("\n press 1 to continue:");
    scanf("%d",&ch);
}
while(ch==1);
}
