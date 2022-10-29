#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct linkedlist{
    int data;
    struct linkedlist *next;
};
typedef struct linkedlist node;
node *start=NULL;

void CreateList(int n){
    node *newnode,*temp;
    newnode=(node*)malloc(sizeof(node));
    if(newnode!=NULL){
        printf("Enter Element: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        start=newnode;
        for(int i=0;i<n-1;i++){
            newnode=(node*)malloc(sizeof(node));
            if(newnode!=NULL){
                temp=start;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                printf("Enter Element: ");
                scanf("%d",&newnode->data);
                newnode->next=NULL;
                temp->next=newnode;
            }
            else{
                printf("Running out of memory.");
            }

        }
    }
    else{
        printf("Running out of memory.");
    }
}
void PrintList(){
    node *ptr;
    ptr=start;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void InsertBegin(){
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    if(newnode!=NULL){
        printf("Enter New Element: ");
        scanf("%d",&newnode->data);
        newnode->next=start;
        start=newnode;
    }
    else{
        printf("\nRunning out of memory.\n");
    }
}
void InsertEnd(){
    node *ptr,*newnode;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    newnode=(node*)malloc(sizeof(node));
    if(newnode!=NULL){
        printf("Enter New Element: ");
        scanf("%d",&newnode->data);
        ptr->next=newnode;
        newnode->next=NULL;
    }
    else{
        printf("Running out of memory.");
    }
}
int Count(){
    int count=0;
    node *ptr;
    if(ptr!=NULL){
        ptr=start;
        while(ptr!=NULL){
            ptr=ptr->next;
            count++;
        }
    }
    else{
        printf("Running out of memory.");
    }
    return count;
}
void Insertafter(){
    node *ptr,*preptr,*newnode;
    preptr=start;
    int num;
    printf("After which number do you want to insert: ");
    scanf("%d",&num);
    do{
        if(preptr!=NULL){
            if(preptr->data==num){
                newnode=(node*)malloc(sizeof(node));
                printf("Enter New Element: ");
                scanf("%d",&newnode->data);
                ptr=preptr;
                ptr=ptr->next;
                preptr->next=newnode;
                newnode->next=ptr;
                break;
            }
            else{
                preptr=preptr->next;
            }
        }
        else{
            printf("\nElement Not Found\n");
            break;
        }
    }while(1);
}
void InsertBefore(){
    node *ptr,*preptr,*newnode;
    ptr=start;
    int num,count=0;
    printf("Before which number do you want to insert: ");
    scanf("%d",&num);
    do{
        if(ptr!=NULL){
            if(ptr->data==num){
                newnode=(node*)malloc(sizeof(node));
                printf("Enter New Element: ");
                scanf("%d",&newnode->data);
                preptr=start;
                for(int i=0;i<count-1;i++){
                    preptr=preptr->next;
                }
                preptr->next=newnode;
                newnode->next=ptr;
                break;
            }
            else{
                ptr=ptr->next;
                count++;
            }
        }
        else{
            printf("\nElement Not Found\n");
            break;
        }
    }while(1);
}
void DeleteBeg(){
    node *ptr,*ptrnext;
    ptr=ptrnext=start;
    ptrnext=ptrnext->next;
    start=ptrnext;
    free(ptr);
    printf("Element Deleted.\n");
}
void DeleteEnd(){
    node *ptr,*ptrbef;
    ptr=ptrbef=start;
    int count=0;
    while(ptr!=NULL){
        ptr=ptr->next;
        count++;
    }
    ptrbef=start;
    for(int i=0;i<count-2;i++){
        ptrbef=ptrbef->next;
    }
    free(ptr);
    ptrbef->next=NULL;
    printf("Element Deleted.\n");
}
void delete(){
    node *preptr,*ptr,*ptrnext;
    int n,count;
    printf("Enter the number you want to delete: ");
    scanf("%d",&n);
    ptr=start;
    int c=Count();
    for(int i=0;i<c;i++){
        if(ptr!=NULL){
            if(ptr->data==n){
                preptr=start;
                for(int i=1;i<count;i++){
                    preptr=preptr->next;
                }
                ptrnext=ptr;
                ptrnext=ptrnext->next;
                preptr->next=ptrnext;
                free(ptr);
                printf("Element Deleted.");
                break;
            }
            else{
                ptr=ptr->next;
                count++;
            }
        }
        else{
            printf("Element not found");
        }
    }
}
int main(){
    int n,ref;
    printf("Enter The Size Of The Linked List: ");
    scanf("%d",&n);
    printf("\nEnter 1 for create list.\nEnter 2 for print list.\nEnter 3 for insert begining.\nEnter 4 for insert end.\nEnter 5 for get the count of element\nEnter 6 for insert after.\nEnter 7 for insert before.\n");
    printf("Enter 8 for delete first element\nEnter 9 to delete last element.\nEnter 10 for delete an element\nEnter 11 for exit.\n");
    do{
        printf("\nEnter Your Choice: ");
        scanf("%d",&ref);
        switch (ref)
        {
        case 1:
            CreateList(n);
            break;
        case 2:
            printf("Number Sequence: \n");
            PrintList();
            break;
        case 3:
            InsertBegin();
            break;
        case 4:
            InsertEnd();
            break;
        case 5:
            printf("Number of elements in the list: %d\n",Count());
            break;
        case 6:
            Insertafter();
            break;
        case 7:
            InsertBefore();
            break;
        case 8:
            DeleteBeg();
            break;
        case 9:
            DeleteEnd();
            break;
        case 10:
            delete();
            break;
        default:
            printf("\nInvalid Input\n");
            break;
        }
    }while(ref!=11);

}