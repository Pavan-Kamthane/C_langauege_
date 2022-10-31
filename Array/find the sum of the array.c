int main()
 {
     int sum = 0,x,y;
     int num[100];
     printf("Enter the size of an array\n");
     scanf("%d",&y);
     printf ("Enter total %d elements\n",y ) ;
     for(x=0;x<y;x++)
     {
         scanf("%d",&num[x]);
         sum=sum+num[x];
     }
    printf("Sum = %d", sum);
    return 0;
 }
