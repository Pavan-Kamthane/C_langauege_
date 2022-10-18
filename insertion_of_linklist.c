#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next
};

void linktrav(struct Node * ptr){
    while(ptr != NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}

struct Node * insert(struct Node *head,int data){
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head ;
    ptr->data= data;
    return ptr;
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head=(struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    linktrav(head);
    head = insert(head,56);
    linktrav(head);

    return 0;
}
