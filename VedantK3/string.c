//A program to simulate string length copy ,concatenation ,reverse, replace and substring
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[50],choice,concat[50],rep[50],sub[50],name[50],rev[50],rp[50],new[50];
    int i=0,j=0,ch,pos,len,index;
    printf("Enter the string  ");
    gets(str);
  do
  {  
    printf("\t\tString Menu\n");
    printf("------------------------------------------\n");
    printf("1.String-length\n");
    printf("2.Copy\n");
    printf("3.Concatenate\n");
    printf("4.Reverse\n");
    printf("5.Replace\n");
    printf("6.Substring\n");
    printf("------------------------------------------\n");
    printf("!!!Please enter a choice(1-6)!!!\n");
    scanf("%d",&ch);
    //String length
    if(ch==1)
    {
        printf("\nThe length of the string '%s' is %d --> ",str,strlen(str));
    }
    //String copy
    else if(ch==2)
    {       
        printf("\nEnter a the word that should be copied to %s --> ",str);
        scanf("%s",name);       
        strcpy(str,name);
        printf("\nAfter copying '%s'",name);
            
    }
    //String Concatenate
    else if(ch==3)
    {
        printf("Enter a new string for performing concatenation --> ");
        scanf("%s",concat);
        strncat(str,concat,strlen(str)-1);
        printf("The concatenated string is '%s'",str);
    }
    //String Reverse
    else if(ch==4)
    {
        for(i=0;i<=strlen(str);i++)
        {
            rev[i]=str[strlen(str)-1-i];
        }
        printf("The reversed string is %s",rev);
    }
    //String Replace
    else if(ch==5)
    {
        printf("------------------------------------------\n");
        printf("The orginal string is --> %s",str);
        printf("\nEnter the word to be replaced %s --> ",&str);
        scanf(" %[^\n]s",rep);
        printf("Enter the replacing word %s --> ",&str);
        scanf(" %[^\n]s",rp);

      if(strlen(rep)==strlen(rp))
      {
        for (int i = 0; i <strlen(str); i++)
        {
            for (int j =0; j < strlen(str); j++)
            {
                    if (rep[i] == str[j] )
                    {                    
                       str[j]=rp[i]; 
     
                    }
            }    
        }
        printf("The replaced string is --> ");
        puts(str);
        printf("------------------------------------------\n");
      }
      else
      {
        printf("\n-------------------------------------------------------------");    
        printf("\nPlz Enter the new word same len as that of the replacing word\n") ;
        printf("-------------------------------------------------------------\n");
      } 
    }
    //Substring
    else if(ch==6)
    {
        printf("Enter the position and length of the substring of the string\n");
        scanf("%d %d",&pos,&len);
        i=0;
        while(i<len)
        {
            sub[i]=str[pos+i-1];
            i++;
        }
        sub[i]='\0';
        printf("The sub string is %s",sub);
    }   
         printf("\nDo you want to go back to the main menu (y/n) --> ");
         scanf(" %c",&choice);  
        
    }while(choice=='Y'||choice=='y');
}
