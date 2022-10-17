
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *head=NULL;
void create(  struct node *);
void display(  struct node *);
void insertatbeg( struct node *);
void insertatend( struct node *);
void insertatpos( struct node *);
void insertbeforepos(struct node*);
void insertafterpos(struct node*);
void deleteatbeg(struct node *);
void deleteatend(struct node *);
void deleteatpos(struct node *);

int main()
{

int ch;
while(1){
  printf("\npress 1:Create 2:Display 3:InsertAtBeg 4:InsertAtEnd 5:InsertAtPos 6:InsertBeforePos 7:InsertAfterPos 8:DeleteAtBeg 9:DeleteAtEnd 10:DeleteAtPos0:Exit \n");
  printf("Enter your choice:");
  scanf("%d",&ch);
switch(ch)
{
  case 1: create(head);
  break;
  case 2: display(head);
  break;
  case 0: exit(1);
  break;
  case 3:insertatbeg(head);
  break;
  case 4:insertatend(head);
  break;
  case 5:insertatpos(head);
  break;
  case 6:insertbeforepos(head);
  break;
  case 7:insertafterpos(head);
  break;
  case 8:deleteatbeg(head);
  break;
  case 9:deleteatend(head);
  break;
  case 10:deleteatpos(head);
  break;
  default:printf("wrong choice\n ");

}

}
  
   return 0;
}
////////////////////////////////////////////
void create(struct node *ptr){
  struct node *temp;
  int data;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter info:");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
if(head==NULL){
  head=temp;
}
else{
  ptr=head;
  while(ptr->next!=NULL){
    ptr=ptr->next;

  }
  ptr->next=temp;
}
printf("Node created successfully");

}
///////////////////////////////////////////////////
void display( struct node *ptr){
if(head==NULL){
printf("Empty linked list!!");
}
else{
  
  printf("LINKED LIST IS:\n");
  while(ptr!=NULL){
printf("%d ",ptr->info);
ptr=ptr->next;
  }
  printf("\n");
}
}
////////////////////////////////////////////////////////
void insertatbeg(struct node *ptr){
   struct node *temp;
  int data;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter info:");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  if(head==NULL){
    head=temp;
  }
  else{
  temp->next=ptr;
  head=temp;
  }
  printf("Node inserted successfully");
}
/////////////////////////////////////////////////
void insertatend(struct node *ptr){
  struct node *temp;
  int data;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter info:");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
if(head==NULL){
  head=temp;
}
else{
  ptr=head;
  while(ptr->next!=NULL){
    ptr=ptr->next;

  }
  ptr->next=temp;
}
printf("Node inserted successfully");

}
///////////////////////////////////////////
void insertatpos(struct node*ptr){
  struct node *temp;
  int data,i,pos;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter info:");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  printf("Enter the position:");
  scanf("%d",&pos);
  ptr=head;
  i=1;
  while(i<pos-1){
    ptr=ptr->next;
    i++;
  }
  temp->next=ptr->next;
  ptr->next=temp;
  printf("Node inserted successfully");


}

/////////////////////////////////////////////
void insertbeforepos(struct node*ptr){
  struct node *temp;
  int data,i,pos;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter info:");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  printf("Enter the position:");
  scanf("%d",&pos);
  ptr=head;
  i=1;
  while(i<pos-2){
    ptr=ptr->next;
    i++;
  }
  temp->next=ptr->next;
  ptr->next=temp;
  printf("Node inserted successfully");


}

////////////////////////////////////////////
void insertafterpos(struct node*ptr){
  struct node *temp;
  int data,i,pos;
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter info:");
  scanf("%d",&data);
  temp->info=data;
  temp->next=NULL;
  printf("Enter the position:");
  scanf("%d",&pos);
  ptr=head;
  i=1;
  while(i<pos){
    ptr=ptr->next;
    i++;
  }
  temp->next=ptr->next;
  ptr->next=temp;
  printf("Node inserted successfully");


}

////////////////////////////////////////////
void deleteatbeg(struct node *ptr){
  if(ptr==NULL){
    printf("Linked list is underflow\n");
  }
  else{
    head=ptr->next;
    free(ptr);
    printf("Node deleted successfully");
  }
}

//////////////////////////////////////////
void deleteatend(struct node *ptr){
  struct node *preptr;
  if(ptr==NULL){
    printf("Linked list is underflow\n");
  }
  else if(ptr->next==NULL){
    head=NULL;
    printf("Node deleted successfully");
    free(ptr);
  }
  else
  {
    while (ptr->next!=NULL)
    {
      preptr=ptr;
      ptr=ptr->next;

    }
    preptr->next=NULL;
    printf("Node deleted successfully");
    free(ptr);
    
  }
}
/////////////////////////////////////////////
void deleteatpos(struct node *ptr)
{
  struct node *preptr;
  int pos,i;
  if(ptr==NULL){
    printf("Linked list is underflow\n");
  }
  else
  {
    printf("Enter position :");
    scanf("%d",&pos);
    if(pos==1){
      head=ptr->next;
       printf("Node deleted successfully");
      free(ptr);
    }
    else{
      i=1;
      while(i<pos){
        preptr=ptr;
        ptr=ptr->next;
        i++;
      }
      preptr->next=ptr->next;
      printf("Node deleted successfully");
     free(ptr);
    }
  }
}
