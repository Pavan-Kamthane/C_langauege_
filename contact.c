#include<stdio.h>
#include<windows.h>
#include<conio.h>

struct contact{
    char name1[20] ,sirname[20] , emailid[30]  ;
    double mob;
}c;

void main(){
        printf("\t *****PHONE BOOK***** \n");
        printf("\t 1. ADD CONTACT       \n");
        printf("\t 2. SEARCH CONTACT    \n");
        printf("\t 3. DELETE CONTACT    \n");
        printf("\t 4. VIEW ALL CONTACT  \n");
        printf("\t 5. EXIT              \n");
        printf("\t ENTER YOUR CHOICE    \n");

    int option;
    scanf("%d",&option);
    switch (option){
    case 1 :
    add_contact();
    break;
    case 2 :
    search_contact();
    break;
    case 3 :
    delete_contact();
    break;
    case 4 :
    view_contact();
    break;
    case 5 :
    exit(0);
    default :
    printf("enter valid choice");
}
 main();
 getch();
 return 0;
}

void add_contact(){
    FILE *fp;
    fp=fopen("contact.txt","a+");
    system("cls");
    printf("\t *****ADD CONTACT*****");
    printf("\n \t NAME AND SIRNAME: ");
    scanf("%s %s",c.name1 ,c.sirname);
    printf("\t EMAIL ID : ");
    scanf("%s",c.emailid);
    printf("\t MOB.NO :");
    scanf("%lf",&c.mob);
    fprintf(fp,"\n%s %s",c.name1 ,c.sirname);
    fprintf(fp,"\t%s",c.emailid);
    fprintf(fp,"\t %lf",c.mob );
    fclose(fp);
 printf("\n \t PRESS ANY KEY TO CONTINUE");
 getch();
 main();
}

void search_contact()
{
    FILE *fp;
    fp =fopen("contact.txt","r");
    system("cls");
    printf("\t *****SEARCH CONTACT*****");
    printf("\n \t ENTER NAME :");
    char name [20];
    scanf("%s",name);
    while(fscanf (fp , "%s %s %s %lf",c.name1 ,c.sirname, c.emailid , &c.mob)!=EOF)
    {
        if(strcmp(name,c.name1)==0)
            printf("\n \t FULL NAME:%s %s %s %lf",c.name1 ,c.sirname ,c.emailid ,c.mob);
    }
    fclose(fp);
    printf("\n \t PRESS ANY KEY TO CONTINUE ");
    getch();
    main();
}

void delete_contact()
{
    FILE *fp , *fp1;
    fp = fopen("contact.txt","r+");
    fp1 =fopen("temp.txt","w");
    system("cls");
    printf("\t *****DELETE CONTACT***** ");
    printf("\n \t ENTER NAME :");
    char name[20];
    scanf("%s",name);
    while(fscanf(fp,"%s %s %s %lf ",c.name1 ,c.sirname ,c.emailid,&c.mob)!=EOF)
        {
        if(strcmp(name , c.name1)==0)
        {
            continue;
        }
        fprintf(fp1,"%s \t %s \t %s \t %lf \n",c.name1 ,c.sirname ,c.emailid , c.mob);
        }
        fclose(fp);
        fclose(fp1);
        remove("contact.txt");
        fp=fopen("contact.txt","w");
        fp1=fopen("temp.txt","r+");
        while(fscanf(fp1,"%s %s %s %lf",c.name1 ,c.sirname ,c.emailid ,&c.mob)!=EOF)
        {
            fprintf(fp,"%s %s %s %lf \n",c.name1 ,c.sirname ,c.emailid ,c.mob);
        }
        fclose(fp);
        fclose(fp1);
        remove("temp.txt");
        printf("\n \t PRESS ANY KEY TO CONTINUE");
        getch();
        main();
 }

 void view_contact()
 {
     FILE *fp;
     fp = fopen("contact.txt","r+");
     system("cls");
     printf("\t *****ALL CONTACTS*****");
     while(fscanf(fp, "%s %s %s %lf",c.name1,c.sirname ,c.emailid ,&c.mob)!=EOF)
     {
         printf("\n \t NAME : %s %s ",c.name1 ,c.sirname);
         printf("\t EMAILID : %s",c.emailid);
         printf(" \t MOB NO : %lf ",c.mob);
     }
     fclose(fp);
     printf("\n \t PRESS ANY KEY TO CONTINUE ");
     getch();
     main();
 }