#include<stdio.h>
int main()
{
    int i,j;
    int org_matrix[3][3];
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            printf("enter value for this[%d][%d] index : ",i,j);
            scanf("%d",&org_matrix[i][j]);
        }
    }

    int det_of_matrix= (org_matrix[0][0] * ((org_matrix[1][1]*org_matrix[2][2]) - (org_matrix[1][2]*org_matrix[2][1]))) -
                        (org_matrix[0][1] * ((org_matrix[1][0]*org_matrix[2][2]) - (org_matrix[1][2]*org_matrix[2][0]))) +
                        (org_matrix[0][2] * ((org_matrix[1][0]*org_matrix[2][1]) - (org_matrix[1][1]*org_matrix[2][0])));
    printf("\ndeterminant of matrix = %d \n",det_of_matrix);

    int transpose_matrix[3][3];
    transpose_matrix[0][0]=org_matrix[0][0];
    transpose_matrix[0][1]=org_matrix[1][0];
    transpose_matrix[0][2]=org_matrix[2][0];
    transpose_matrix[1][0]=org_matrix[0][1];
    transpose_matrix[1][1]=org_matrix[1][1];
    transpose_matrix[1][2]=org_matrix[2][1];
    transpose_matrix[2][0]=org_matrix[0][2];
    transpose_matrix[2][1]=org_matrix[1][2];
    transpose_matrix[2][2]=org_matrix[2][2];
    printf("\ntranspose matrix\n");
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            printf("%d  ",transpose_matrix[i][j]);

        }printf("\n");
    }


   int adj_matrix[3][3];
    adj_matrix[0][0]=(transpose_matrix[1][1]*transpose_matrix[2][2])-(transpose_matrix[1][2]*transpose_matrix[2][1]);
    adj_matrix[0][1]=((transpose_matrix[1][0]*transpose_matrix[2][2])-(transpose_matrix[2][0]*transpose_matrix[1][2]))*(-1);
    adj_matrix[0][2]=(transpose_matrix[1][0]*transpose_matrix[2][1])-(transpose_matrix[2][0]*transpose_matrix[1][1]);
    adj_matrix[1][0]=((transpose_matrix[0][0]*transpose_matrix[2][2])-(transpose_matrix[0][2]*transpose_matrix[2][1]))*(-1);
    adj_matrix[1][1]=(transpose_matrix[0][0]*transpose_matrix[2][2])-(transpose_matrix[2][0]*transpose_matrix[0][2]);
    adj_matrix[1][2]=((transpose_matrix[0][0]*transpose_matrix[2][1])-(transpose_matrix[2][0]*transpose_matrix[0][1]))*(-1);
    adj_matrix[2][0]=(transpose_matrix[0][1]*transpose_matrix[1][2])-(transpose_matrix[1][1]*transpose_matrix[0][2]);
    adj_matrix[2][1]=((transpose_matrix[0][0]*transpose_matrix[1][2])-(transpose_matrix[1][0]*transpose_matrix[0][2]))*(-1);
    adj_matrix[2][2]=(transpose_matrix[0][0]*transpose_matrix[1][1])-(transpose_matrix[1][0]*transpose_matrix[0][1]);
    printf("\nadjugate of tranpose matrix\n");
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            printf("%d  ",adj_matrix[i][j]);

        }printf("\n");
    }


    int inv_matrix[3][3];
    inv_matrix[0][0]=adj_matrix[0][0] / det_of_matrix;
    inv_matrix[0][1]=adj_matrix[0][1] / det_of_matrix;
    inv_matrix[0][2]=adj_matrix[0][2] / det_of_matrix;
    inv_matrix[1][0]=adj_matrix[1][0] / det_of_matrix;
    inv_matrix[1][1]=adj_matrix[1][1] / det_of_matrix;
    inv_matrix[1][2]=adj_matrix[1][2] / det_of_matrix;
    inv_matrix[2][0]=adj_matrix[2][0] / det_of_matrix;
    inv_matrix[2][1]=adj_matrix[2][1] / det_of_matrix;
    inv_matrix[2][2]=adj_matrix[2][2] / det_of_matrix;
    printf("\ninverse of matrix\n");
    for (i=0 ; i<3 ; i++)
    {
        for (j=0 ; j<3 ; j++)
        {
            if(adj_matrix[i][j]%det_of_matrix!=0)
            {
                printf("%d/%d  ",adj_matrix[i][j],det_of_matrix);
            }else
            {
                printf("%d  ",inv_matrix[i][j]);
            }
        }printf("\n");
    }





}
