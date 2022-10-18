#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;

void create_linked_list(int a[],int n)
{
    struct node *last,*temp;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=NULL;
    last=head;
    for(int i=1;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

void display()
{
    struct node *p=head;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int count()
{
    struct node *p=head;
    int c=0;
    while(p)
    {
        c++;
        p=p->next;
    }
    return c;
}

void reverse_display()
{
    struct node *p=head;
    int n=count(),i=0;
    int a[n];
    while(p)
    {
        a[i++]=p->data;
        p=p->next;
    }
    for(i=n-1;i>=0;i--)
     printf("%d ",a[i]);
    printf("\n"); 
}

void recursive_display(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d ",p->data);
        return recursive_display(p->next);
    }
    printf("\n");
}

void reverse_recursive_dispaly(struct node *p)
{
    if(p!=NULL)
    {
        reverse_recursive_dispaly(p->next);
        printf("%d ",p->data);
    }
}

int sum()
{
    int s=0;
    struct node *p=head;
    while(p)
    {
        s+=p->data;
        p=p->next;
    }
    return s;
}

int max()
{
    int max=0;
    struct node *p=head;
    while(p)
    {
        if(max<p->data)
         max=p->data;
        p=p->next; 
    }
    return max;
}

struct node * searching(int key)
{
    struct node*p=head;
    while(p)
    {
        if(key==p->data)
         return p;
        p=p->next; 
    }
    return NULL;
}

struct node * Improved_searching(int key)
{
    struct node *p=head,*q=NULL;
    while(p)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=head;
            head=p;

        return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

void Insert_BFN(int n)
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node ));
    p->data=n;
    p->next=head;
    head=p;
}

void Insert_AGP(int n,int pos)
{
    struct node *p,*t=head;
    p=(struct node*) malloc(sizeof(struct node));
    p->data=n;
    for(int i=1;i<pos;i++)
    {
        t=t->next;
    }
    p->next=t->next;
    t->next=p;
}

void Insert(int n,int pos)
{
    struct node *p=head,*t=NULL;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=n;
    // t->next=NULL;
    if(pos<0 || pos>count())
     return ;
    else 
    {
        if(pos==0)
        {
            t->next=head;
            head=t;
        }
        else 
        {
            for(int i=1;i<pos;i++)
             p=p->next;
            t->next=p->next; 
            p->next=t;
        }
    } 
}

void Insert_last(int n)
{
    struct node *p,*last;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=n;
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
        last=p;
    }
    else
    {
       last->next=p;
       last=p;
    }
}

void Sorted_insert(int n)
{
    struct node *t,*p=head,*q=NULL;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=n;
    t->next=NULL;
    if(head==NULL)
    {
        head=t;
    }
    else
    {
        while(p->data<=n)
       {
        q=p;
        p=p->next;
       }
       if(p==head)
       {
          t->next=head;
          head=t;
       }
       else
       { 
          t->next=q->next;
          q->next=t;
       }

    }
}

int Delete_FN()
{
    int n;
    struct node *t=head;
    head=t->next;
    n=t->data;
    free(t);
    return n;
}

int Delete_AGP(int pos)
{
    int n;
    if(pos<1 || pos>count())
     return -1;
    else
    {
        struct node *p=head,*q=NULL;
        for(int i=1;i<pos;i++)
        {
            q=p;p=p->next;
        }
        n=p->data;
        q->next=p->next;
        free(p);
        return n;
    } 
}

int delete(int pos)
{
    int n=-1;
    if(pos<1 || pos>count())
     return n;
    else{
        struct node *p=head,*q=NULL;
        if(pos==1)
        {
            n=head->data;
            head=head->next;
            free(p);
        }
        else 
        {
             for(int i=1;i<pos;i++)
             {
                  q=p;
                  p=p->next;
              }
              n=p->data;
              q->next=p->next;
              free(p);
        }
        return n;

    } 
}

int main()
{
    int a[5]={1,2,3,4,5};
    // create_linked_list(a,5);
    // display();
    // reverse_display();
    // recursive_display(head);
    // reverse_recursive_dispaly(head);
    // printf("\n%d",sum());
    // printf("\n%d\n",max());
    // printf("\n%d",searching(4));
    // printf("\n%d\n",Improved_searching(4));
    // Insert_BFN(9);
    // Insert_AGP(7,5);
    // Insert(8,5);
    Insert_last(10);
    Insert_last(22);
    Insert_last(30);
    Insert_last(47);
    Insert_last(53);
    Sorted_insert(4);
    display();
    // Delete_FN();
    printf("\n%d \n",delete(3));
    display();
 return 0;
}