#include<stdio.h>
int main(){
    int size=0,m,n;
    printf("enter no. of rows and columns: ");
    scanf("%d %d",&m,&n);
        int a[m][n];

    printf("enter elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("matrix:\n");
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
            if(a[i][j]!=0){
                size++;
            }
        }
        printf("\n");
    }

     int k=0;
    int s[size][3];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=0){
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;
            }
        }
    }

    printf("Triplet representation:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",s[i][j]);
        }
        printf("\n");
    }
}
