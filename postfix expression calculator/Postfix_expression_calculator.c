#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max 100         //Defining stack size, Can adjust the maximum size of the stak and the expression by changing the value.

char stack[Max];        //Initializing a stack using an array.
int top=-1;             //Set the top value of the stack.

int j=1;                //Integer variable using for temporary values.

bool isEmpty(){         //Checking whether the stack is empty or not.
    if(top==-1){
        return 1;       //If empty return the bool value 1, as true.
    }
    else{
        return 0;       //If not empty return the bool value 0, as false.
    }
}
bool isFull(){          //Checking whether the stack is full or not.
    if(top==99){
        return 1;       //If full return the bool value 1, as true.
    }
    else{
        return 0;       //If not full return the bool value 0, as false.
    }
}
char push(char data){       //Function for push data into the stack.
    if(!isFull()){          //Checking whether the stack is full using isFull function.
        top++;                  //Incrementing top index to push the next value.
        stack[top]=data;        //If not full, push data into the stack.
    }
    else{
        printf("Stack is Full");        //If full, print stack is full.
    }
}
char pop(){                         //Fucntion for pop data from the stack.
    char x;                         //Defining a variable for hold the top value of the stack.
    if(!isEmpty()){                 //Checking whether the stack is empty using isEmpty function.
        x=stack[top];               //Assigning the top value of the stack to the variable.
        top--;                       //Decrementing top index to pop the next value.
        return x;                   //Return the value of x, was assigned from the stack.
    }
    else{
        printf("Stack is Empty.");          ////If empty, print stack is empty.
    }
}
char Add(){                             //Function for do the addition operator
    char val1=pop();                                            //pop the top value from the stack and assign it to the var1 character variable
    char val2=pop();                                            //pop the top value from the stack and assign it to the var2 character variable
    if((val2>='A'&&val2<='Z')||(val2>='a'&&val2<='z')){         //Checking whether the poped value is an alphabetical character or a numerical character.       
        
        printf("LD\t%c\n",val2);                                //If alphabetical, execute printf function for LD.
    }
    else{
        printf("LD\tTemp%d\n",val2);                           //If not, execute printf function for LD.
    }
    if((val1>='A'&&val1<='Z')||(val1>='a'&&val1<='z')){        //Checking whether the poped value is an alphabetical character or a numerical character.
        printf("AD\t%c\n",val1);                                //If alphabetical, execute printf function for AD.
    }
    else{
        
        printf("AD\tTemp%d\n",val1);                           //If not, execute printf function for AD.
    }
    printf("ST\tTemp%d\n",j);                                 //places the contents of the register into the variable
    push(j);                                            //Push temporary value into the stack
    j++;                                            //Increment j for the next temporary value. 
}
char Mul(){                             //Function for do the multiplication operator
    char val1=pop();                                        //pop the top value from the stack and assign it to the var1 character variable
    char val2=pop();                                        //pop the top value from the stack and assign it to the var2 character variable
    if((val2>='A'&&val2<='Z')||(val2>='a'&&val2<='z')){         //Checking whether the poped value is an alphabetical character or a numerical character.
        
        printf("LD\t%c\n",val2);                                //If alphabetical, execute printf function for LD.
    }
    else{
        printf("LD\tTemp%d\n",val2);                            //If not, execute printf function for LD.                     
    }
    if((val1>='A'&&val1<='Z')||(val1>='a'&&val1<='z')){         //Checking whether the poped value is an alphabetical character or a numerical character.
        printf("ML\t%c\n",val1);                                //If alphabetical, execute printf function for ML
    }
    else{
        
        printf("ML\tTemp%d\n",val1);                    //If not, execute printf function for ML
    }
    printf("ST\tTemp%d\n",j);                    //places the contents of the register into the variable
    push(j);                                    //Push temporary value into the stack
    j++;                                        //Increment j for the next temporary value.
}
char Subs(){                             //Function for do the substraction operator
    char val1=pop();                                    //pop the top value from the stack and assign it to the var1 character variable
    char val2=pop();                                        //pop the top value from the stack and assign it to the var2 character variable
    if((val2>='A'&&val2<='Z')||(val2>='a'&&val2<='z')){     //Checking whether the poped value is an alphabetical character or a numerical character.
        
        printf("LD\t%c\n",val2);                            //If alphabetical, execute printf function for LD.
    }
    else{
        printf("LD\tTemp%d\n",val2);                        //If not, execute printf function for LD.
    }
    if((val1>='A'&&val1<='Z')||(val1>='a'&&val1<='z')){     //Checking whether the poped value is an alphabetical character or a numerical character.
        printf("SB\t%c\n",val1);                            //If alphabetical, execute printf function for SB
    }
    else{
        
        printf("SB\tTemp%d\n",val1);                         //If not, execute printf function for SB
    }
    printf("ST\tTemp%d\n",j);                               //places the contents of the register into the variable
    push(j);                                                //Push temporary value into the stack
    j++;                                                    //Increment j for the next temporary value.
}
char Div(){                             //Function for do the division operator
    char val1=pop();                                        //pop the top value from the stack and assign it to the var2 character variable
    char val2=pop();                                        //pop the top value from the stack and assign it to the var2 character variable
    if((val2>='A'&&val2<='Z')||(val2>='a'&&val2<='z')){        //Checking whether the poped value is an alphabetical character or a numerical character.
        
        printf("LD\t%c\n",val2);                                //If alphabetical, execute printf function for LD.
    }
    else{
        printf("LD\tTemp%d\n",val2);                            //If not, execute printf function for LD.
    }
    if((val1>='A'&&val1<='Z')||(val1>='a'&&val1<='z')){         //Checking whether the poped value is an alphabetical character or a numerical character.
        printf("DV\t%c\n",val1);                                //If alphabetical, execute printf function for DV
    }
    else{
        
        printf("DV\tTemp%d\n",val1);                             //If not, execute printf function for SB
    }
    printf("ST\tTemp%d\n",j);                                   //places the contents of the register into the variable
    push(j);                                            //Push temporary value into the stack
    j++;                                                //Increment j for the next temporary value.
}

int main(){
    char expression[Max];                               //Initialize expression character array.
    printf("\nInput Your Postfix Expression: ");
    gets(expression);                                   //Getting the postfix expression from the user.
    printf("\n\n");                               
    int len=strlen(expression);                          //Getting the length of the postfix expression.
    int x=0,y=0;                                           //Initialize integer variables to count the number of alphabetic characters and numerical characters.
    for(int i=0;i<len;i++){                                 //Loop for count the number of alphabetic characters and numerical characters.
        if((expression[i]>='A'&&expression[i]<='Z')||(expression[i]>='a'&&expression[i]<='z')){         //Checking whether the character is an alphabetical character.    
            x++;                                                                                        //Increment x for alphabetical character.
        }
        else if(expression[i]=='+'||expression[i]=='-'||expression[i]=='*'||expression[i]=='/'){        //Checking whether the character is an operational character.
            y++;                                                                                        //Increment y for numerical character.
        }
        else{
            printf("\nCan't Continue,Invalid Character Detected.\n\n");         //If another character detected other than alphabetical or numerical,Execute printf function.
            exit(0);
        }
    }
    printf("Number of Variables = %d\nNumber of Operators = %d",x,y);           //Print number of alphabetical characters and numerical characters.
    if(x!=y+1){                                                                       //Checking whether the expression is valid or not.
        printf("\n\nInvalid Expession.");
        exit(0);
    }
    else{
        printf("\n\nValid Expression.\n\n");
    }

    for(int i=0;i<len;i++){                         //Read the expression character by character and do the operations.
        if(expression[i]=='+'){
            Add();                              //If an addition character, execute Add() function.
        }
        else if(expression[i]=='*'){
            Mul();                              //If an multiplication character, execute Mul() function.
        }
        else if(expression[i]=='-'){
            Subs();                             //If an substraction character, execute Sub() function. 
        }
        else if(expression[i]=='/'){
            Div();                             //If an division character, execute Div() function.
        }
        else if((expression[i]>='A'&&expression[i]<='Z')||(expression[i]>='a'&&expression[i]<='z')){    //Checking whether the character is an alphabetical character. 
            push(expression[i]);            //push to the stack if it is an alphabetic character.
        }
    }

}