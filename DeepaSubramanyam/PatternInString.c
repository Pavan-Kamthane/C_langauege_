/*input:PROGRAM
output:

            G
          GR
        GRA
      GRAM
    GRAMP
  GRAMPR
GRAMPRO*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    int i,j,k,mid;
    char str[100];
    scanf("%s", str);
    mid=strlen(str)/2;
    for(i=1;i<=strlen(str);i++)
    {
        int temp=(i*2)-1,count=0;
        for(j=2*strlen(str)-1;j>=i;j--)
        {
            if(abs(temp)==j)
            {
                for(k=temp;count<i;k++){
                    if(count>=strlen(str))
                        printf("%c",str[(mid+count)%10]);
                    else
                        printf("%c",str[(mid+count)%strlen(str)]);
                    count++;
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}