#include <stdio.h>  
#include <conio.h>  
  
int main ()  
{  
    int m, temp, reverse = 0, element, sum_of_elements = 0;  
      
    printf (" Enter a Number: ");  
    scanf (" %d", &m); 
      
    temp = m; 
      
      
    while ( temp > 0)  
    {  
          
        sum_of_elements = sum_of_elements + temp % 10;   
        temp = temp / 10;  
    }  
      
    temp = sum_of_elements; 
    printf (" \n The sum of the digits = %d", temp);  
      
     
    while ( temp > 0)  
    {  
        reverse = reverse * 10 + temp % 10;  
        temp = temp / 10;  
    }  
      
    printf (" \n The reverse of the digits = %d", reverse);  
      
      
    printf (" \n The product of %d * %d = %d", sum_of_elements, reverse, reverse * sum_of_elements);  
    
    if ( reverse * sum_of_elements == m)  
    {  
        printf (" \n %d is a Magic Number. ", m);  
    }  
    else  
    {  
        printf (" \n %d is not a Magic Number. ", m);  
    }  
    return 0;  
      
}  