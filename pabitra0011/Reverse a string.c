#include<stdio.h>

 int main(){
 char str[100],ch;
 int len=0,i;
 printf("Enter the string ::");
 gets(str);

 //finding length of the input string ..
 while(str[len]!='\0'){
    len++;
 }
 //a simple method to swaping the char's to reverse the string 
 for(i=0;i<len/2;i++){
    ch=str[i];
    str[i]=str[len-1-i];
    str[len-1-i]=ch;
 }
 printf("Reverse string is %s",str);
 return 0;

}
