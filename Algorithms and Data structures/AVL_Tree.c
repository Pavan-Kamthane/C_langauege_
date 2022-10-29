/*Write a program to implement AVL tree with suitable
operations in C.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
};
struct node *newnode(int data)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=1;
    return temp;
}
int height(struct node *temp)
{
    if(temp==NULL)
        return 0;
    return temp->height;
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
struct node *rightrotate(struct node *y)
{
    struct node *x=y->left;
    struct node *T2=x->right;
    x->right=y;
    y->left=T2;
    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;
}
struct node *leftrotate(struct node *x)
{
    struct node *y=x->right;
    struct node *T2=y->left;
    y->left=x;
    x->right=T2;
    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    return y;
}
struct node *insert(struct node *root,int data)
{
    if(root==NULL)
        return newnode(data);
    if(data<root->data)
    {
        root->left=insert(root->left,data);
        if(height(root->left)-height(root->right)==2)
        {
            if(data<root->left->data)
                root=rightrotate(root);
            else
                root=leftrotate(root);
        }
    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
        if(height(root->right)-height(root->left)==2)
        {
            if(data>root->right->data)
                root=leftrotate(root);
            else
                root=rightrotate(root);
        }
    }
    root->height=max(height(root->left),height(root->right))+1;
    return root;
}
struct node *minvalue(struct node *root)
{
    struct node *current=root;
    while(current->left!=NULL)
        current=current->left;
    return current;
}
struct node *delete(struct node *root,int data)
{
    if(root==NULL)
        return root;
    if(data<root->data)
        root->left=delete(root->left,data);
    else if(data>root->data)
        root->right=delete(root->right,data);
    else
    {
        if(root->left==NULL)
        {
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        struct node *temp=minvalue(root->right);
        root->data=temp->data;
        root->right=delete(root->right,temp->data);
    }
    if(root==NULL)
        return root;
    root->height=max(height(root->left),height(root->right))+1;
    if(height(root->left)-height(root->right)==2)
    {
        if(height(root->left->left)>height(root->left->right))
            root=rightrotate(root);
        else
            root=leftrotate(root);
    }
    else if(height(root->right)-height(root->left)==2)
    {
        if(height(root->right->right)>height(root->right->left))
            root=leftrotate(root);
        else
            root=rightrotate(root);
    }
    return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void display(struct node *root)
{
    
    if(root!=NULL)
    {
        printf("%d ",root->data);
        display(root->left);
        display(root->right);
    }
}
int main()
{
    struct node *root=NULL;
    int choice,data;
    while(1)
    {
        printf("\n1.Insert 2.Delete 3.Inorder 4.Display 5.Exit: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the data: ");
                scanf("%d",&data);
                root=insert(root,data);
                break;
            case 2:
                printf("Enter the data: ");
                scanf("%d",&data);
                root=delete(root,data);
                break;
            case 3:
                inorder(root);
                break;
            case 4:
                display(root);
                break;
	    
	    
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");

        }
    }
    

    return 0;
}
