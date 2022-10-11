int main()
{
    /* Here we are taking a char array of size 
     * 100 which means this array can hold a string 
     * of 100 chars. You can change this as per requirement
     */
    char str[100],i;
    printf("Enter a string: \n");
    scanf("%s",str);

    // '\0' represents end of String
    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of input string: %d",i);
    
    return 0;
}
