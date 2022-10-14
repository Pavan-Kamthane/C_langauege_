#include<stdio.h>
#include<conio.h>
int a[100];
int n,i,x,pos;
void create();
void display();
void delet();
void insert();
void search();
int main()
{
int ch;
clrscr();
printf("\n1.create");
printf("\n2.display");
printf("\n3.delet");
printf("\n4.insert");
printf("\n5.search");
do
{
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
delet();
break;
case 4:
insert();
break;
case 5:
search();
break;
default:
printf("\n exit");
break;
}
}
while(ch<=5);
return 0;
}
void create()
{
printf("\n enter the size of the array elements");
scanf("%d",&n);
printf("\n enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void display()
{
printf("enter size of an array");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
void delet()
{
printf("enter the position of an element delete");
scanf("%d",&pos);
x=a[pos];
if(pos<=n-1)
{
for(i=pos-1;i<=n-1;i++)
{
a[i]=a[i+1];
}
n=n-1;
}
else
{
printf("array is full");
}
}
void insert()
{
printf("enter position for element");
scanf("%d",&pos);
if(pos<=n+1)
{
printf("enter the new element to be inserted");
scanf("%d",&x);
for(i=n-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}

a[pos-1]=x;
n=n+1;
}
else
{
printf("\n invalid position");
}
}
void search()
{
int x;
printf("enter element to search");
scanf("%d",&x);
for(i=0;i<=n;i++)
{
if (a[i]==x)
{
printf("\n element found at position %d",i+1 );
}
else
{
printf("\n element not found at position %d",i+1);
}
}
}


