/*
Sample Input: May 12,2000
Sample Output:12/5/2000
Sample Input:12/4/2000
Sample Output:4/12/2000
Note:This program will not check whether given user input date is valid or not
*/

#include<stdio.h>
#include<string.h>
int cnt(char arr[],int n);

int main()
{
    char arr[100],arr1[13]={'u','F','r','p','y','e','l','g','S','O','N','D','\0'};
    static int i,c,temp,count,count1,count2,result,res,n;
    printf("Please enter date format to convert\n");
    gets(arr);
    if(!(arr[0]>='1'&&arr[0]<='9')){
      for(i=0;arr[i]!='\0';i++)
        {
            if(arr[i]>='0' && arr[i]<='9'){
                printf("%c",arr[i]);
                if(arr[i+1]==',')
                {
                    printf("/");
                    break;}
                }
        }

        if(arr[0]=='J'||arr[0]=='M'||arr[0]=='A')
        {
            if(arr[2]=='n'){
                c=3;}
            else if(arr[0]=='A')
            {
                if(arr[1]=='p')
                    c=1;
            }
            else{
                c=2;}
         }
        for(i=0;i<12;i++)
        {
            if(arr[c]==arr1[i]){
               printf("%d/",i+1);
               break;}
        }
        for(i=4;i>0;i--)
        {
           printf("%c",arr[strlen(arr)-i]);
           count++;
        }
  }


   else{
        count1=cnt(arr,n);
        count2=cnt(arr,count1+1);
        result=count1-count2;
        res=count1+count2;
        if(result==0)
        {
            if(count1==2)
                res--;
            for(i=0;i<count1;i++)
            {
                temp=arr[i];
                arr[i]=arr[i+res];
                arr[i+res]=temp;
            }
        }
        else if(result>0)
        {
            temp=arr[3];
            for(i=0;i<2;i++)
            {
                arr[i+2]=arr[i];
            }
            arr[0]=temp;
            arr[1]='/';
        }
        else
        {
            temp=arr[0];
             for(i=0;i<2;i++)
                {
                    arr[i]=arr[i+2];
                }
            arr[i]='/';
            arr[i+1]=temp;
        }
     puts(arr);
   }
}
int cnt(char arr[],int n)
{
    int i=0,count=0;
    for(i=n;i<strlen(arr);i++)
        {
            if(arr[i]=='/')
            {
                break;
            }
            else
            {
                count++;
            }
        }
    return count;
}