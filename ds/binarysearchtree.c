#include<stdio.h>
#include<stdlib.h>
typedef struct node*tree;
struct node
{
    int element;
    tree left;
    tree right;
};
tree T=NULL;
tree insert(int element,tree T)
{ 
    if(T==NULL)
    {
        T=(tree)malloc(sizeof(tree));
        T->element=element;
        T->left=(tree)malloc(sizeof(tree));
        T->right=(tree)malloc(sizeof(tree));
        T->left=T->right=NULL;
    }
    else if(element<T->element)
     T->left=insert(element,T->left);
        else if(element>T->element)
     T->right=insert(element,T->right);
     return T;
}
void preorder(tree T)
{
    if(T!=NULL)
    {
        printf("\n%d",T->element);
        preorder(T->left);
        preorder(T->right);
    }
}
void inorder(tree T)
   {
    if(T!=NULL)
    {
        inorder(T->left);
        printf("\n%d",T->element);
        inorder(T->right);
    }
}
void postorder(tree T)
{
    if(T!=NULL)
    {
        postorder(T->left);
        postorder(T->right);
        printf("\n%d",T->element);
    }
}
tree find(int element,tree T)
{
    if(T==NULL)
    return NULL;
    else if(element<T->element)
    return(find(element,T->left));
    else if(element>T->element)
    return(find(element,T->right));
    else
    return T;
    
}
tree find_min(tree T)
{
    if(T==NULL)
    return NULL;
    else if(T->left==NULL)
    return T;
    else 
    return(find_min(T->left));
}
tree find_max(tree T)
{
    if(T==NULL)
    return NULL;
    else if(T->right==NULL)
    return T;
    else 
    return(find_max(T->right));
}
tree delete(int element,tree T)
{   
    tree temp,child;
    if(T==NULL)
      printf("\n empty");
    else if(element<T->element)
    T->left=delete(element,T->left);
    else if(element>T->element)
    T->right=delete(element,T->right);
    else if(T->left&&T->right)
    {
        temp=find_min(T->right);
        T->element=temp->element;
        T->right=delete(T->element,T->right);
    }
    else
    {   temp=T;
        if(T->left==NULL)
        child=T->right;
        else if(T->right==NULL)
        child=T->left;
        free(temp);
        return child;
    }
    return T;
}
void main()
{
    int ch,choice,element;
    tree temp;
    do
    {
        printf("\n enter the choice\n1.insert\n2.preorder\n3.inorder\n4.postorder\n5.find\n6.findmin\n7.findmax\n8.delete");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:do
        {
            printf("\n enter element to be inserted:");
              scanf("%d",&element);
             T= insert(element,T);
              printf("\n to insert more press 1:");
              scanf("%d",&ch);
        }
              while(ch==1);
              break;
       case 2:if(T==NULL)
           printf("\n empty");
           else
           {
               printf("\n elements in preorder is:");
               preorder(T);
               }break;
       case 3:       if(T==NULL)
           printf("\n empty");
           else
           {
         printf("\n elements in inorder is:");
         inorder(T);
         }break;
      case 4: if(T==NULL)
           printf("\n empty");
           else
           {
               printf("\n elements in postorder is:");
               postorder(T);
               }break;
        case 5:if(T==NULL)
              printf("\n empty");
              else
              {
               printf("\n enter element to be found");
               scanf("%d",&element);
               temp=find(element,T);
               if(temp==NULL)
               printf("\n element %d is not found",element);
               else
               printf("\n element %d is found",temp->element);
              }
               break;
        case 6:temp=find_min(T);
               if(temp!=NULL)
               {
                   printf("\n minimum element is %d",temp->element);
               }break;
        case 7:temp=find_max(T);
               if(temp!=NULL)
               {
                   printf("\n maximum element is %d",temp->element);
               }break;
        case 8:printf("\n enter element to be deleted:");
               scanf("%d",&element);
               T=delete(element,T);break;
        printf("\n press 2 to continue");
        scanf("%d",&ch);
        }
    }
        while(ch==2);
}
