// input:hi find greatest even numbered word in the sentence   
// output:greatest

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char arr[100];
    int i,count=0,temp=0,max=0;
    printf("Enter the sentence to find biggest even numbered word\n");
    scanf("%[^\n]%*c", arr);
    temp=0;
    for(i=0;i<strlen(arr);i++){
        if(arr[i]!=' ')
        {
            count++;
        }
        else{
            if(count%2==0)
            {
                if(max<count){
                   max=count;
                   temp=i-count;}
            }
            count=0;
        }
    }
    if(count>max)
        {
            if(count%2==0)
            {
                max = count;
                temp = strlen(arr)-max;
            }
        }
    if(max==0)
    {
        printf("In the given string no even numbered word is present");
        exit(1);
    }
    for(i=temp;i<temp+max;i++)
    {
        printf("%c",arr[i]);
    }
}
