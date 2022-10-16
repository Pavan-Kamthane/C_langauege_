#include <stdio.h>
#include <stdlib.h>
struct node {
    float val;
    struct node * next;
};
typedef struct node node;
node * create_node(float val){
    node * p=(node*)malloc(sizeof(node));
    p->val=val;
    p->next=NULL;
    return p;
}
void insert_order(node ** l,node * k){
    node * p=*l;
    if(p==NULL){
        *l=k;
        return ;
    }
    node * q=NULL;
    while(p!=NULL && p->val<=k->val){
        q=p;
        p=p->next;
    }
    if(q==NULL){
        k->next=p;
        *l=k;
        return;
    }
    q->next=k;
    k->next=p;

}

void bucket_sort(float A[],int n){
    node * B[n];
    node * p;
    for(int i=0;i<n;i++){
        B[i]=NULL;
    }
    for(int i=0;i<n;i++){
        p=create_node(A[i]);
        insert_order(B+(int)(A[i]*n),p);
    }
    int j=0;
    for(int i=0;i<n;i++){
        while(B[i]!=NULL){
            A[j++]=B[i]->val;
            B[i]=B[i]->next;
        }
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    float * A=new float [n];
    for(int i=0;i<n;i++){
        scanf("%f",A+i);
    }
    bucket_sort(A,n);
    for(int i=0;i<n;i++){
        printf("%f ",A[i]);
    }
    printf("\n");
    return 0;
}
