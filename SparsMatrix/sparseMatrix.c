#include<stdio.h>

int main()
{
    int n, m, a, b, matrix[10][10];
    int counter = 0;
    printf("\nEnter the number of rows and columns of the matrix: \n\n");
    scanf("%d%d",&m,&n);

    printf("\nEnter the %d elements of the matrix \n\n", m*n);
    for(a = 0; a < m; a++)   
    {
        for(b = 0; b < n; b++)   
        {
            scanf("%d", &matrix[a][b]);
            if(matrix[a][b] == 0)
            counter++;  
        }
    }

    
    printf("\n\nThe entered matrix is: \n\n");
    for(a = 0; a < m; a++)  
    {
        for(b = 0; b < n; b++)   
        {
            printf("%d\t", matrix[a][b]);
        }
    printf("\n"); 
    }

    
    if(counter > (m*n)/2)
        printf("\n\nThe entered matrix is a Sparse matrix.\n\n");
    else
        printf("\n\nThe entered matrix is not a Sparse matrix\n\n");

    return 0;
}