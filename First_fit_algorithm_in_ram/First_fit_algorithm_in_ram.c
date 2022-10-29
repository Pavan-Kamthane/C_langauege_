#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

struct MemoryAlloc                  //Create Structure For Allocate Memory.
{
    struct MemoryAlloc *prev;
    char pro_name[50];
    int PreSize;
    int size;
    int avail;
    struct MemoryAlloc *next;
};
typedef struct MemoryAlloc node;
node *fnode,*lnode;

int ExisCheck(node *check){                //Function to check whether the allocating program is already exist.                     
    node *temp=fnode;
    int result=strcmp(temp->pro_name,check->pro_name);
    while(temp->next!=NULL){                                //Compare the program names node by node.
        if(result!=0){
            temp=temp->next;
            result=strcmp(temp->pro_name,check->pro_name);
        }
        else{
            printf("\n---------------------------------------------------\n");
            printf("\n           %s program is already exist.\n",check->pro_name);      //If the program already exist, print as this.
            printf("\n---------------------------------------------------\n");
            return 0;                                                                   //Exit from the function by returning 0.
        }
    }
    return 1;                                                                           //If doesn't exist return 1.
}

int AllocBlock(node *check){                                //Function to avoid inserting a program with the program name 'Free'
    if(strcmp(check->pro_name,"Free")==1){
        return 1;
    }
    else{
        printf("\n---------------------------------------------------\n");
        printf("\n                  Invalid Input.\n");
        printf("\n---------------------------------------------------\n");
        return 0;
    }
}
//Function to allocate memory to a program.
int MemAlloc(){
    node *allocate,*temp;                           //Variables to allocate a program and to traverse through the linked list.
    allocate=(node*)malloc(sizeof(node));           //Allocate a memory block
    printf("\nAllocate: ");
    scanf("%s %d",&allocate->pro_name,&allocate->size);         //Getting Program name and size.
    
    int check1=ExisCheck(allocate);                         //Integer variable to store the return value from the function.
    int check2=AllocBlock(allocate);                        //Integer variable to store the return value from the function.
    if(check1==0||check2==0){                               //Check whether the requirements are satisfied to execute the allocate function.
        return 0;                                           /*If both check1 and check2 are 0, it means the program already exist or the 
                                                              program name is 'Free' then stop executing the MemAlloc function*/ 
    }
    temp=fnode;
    while(temp->next!=NULL){                                //Traverse through the linked list until it ends.
        temp=temp->next;
        if(temp->avail==0&&((temp->next->PreSize-temp->PreSize)>=allocate->size)){          /*If free space found and there is enough memory to allocate
                                                                                                new program then it will allocate in there  */  
            if((temp->next->PreSize-temp->PreSize)>allocate->size){             //Check whether the program size is strictly less than the free memory.                
                allocate->PreSize=temp->prev->size+temp->prev->PreSize;         //If strictly less, allocate the new program and adjust the free memory size. 
                temp->PreSize=temp->PreSize+allocate->size;
                allocate->avail=1;
                temp->prev->next=allocate;
                allocate->prev=temp->prev;
                allocate->next=temp;
                temp->prev=allocate;
                return 0;                                              //After allocating, fuction will stop.
            }
            else if ((temp->next->PreSize-temp->PreSize)==allocate->size)           //check if the free memory size is equal to the new program size
            {
                strcpy(temp->pro_name,allocate->pro_name);                          //Allocate the program. 
                return 0;                                                           //After allocating, fuction will stop.
            }
        }
        
    }
    
    if(lnode->PreSize+allocate->size <= lnode->size){                   //Check whether the free memory size is enough to allocate a new program.
        allocate->PreSize=temp->prev->size+temp->prev->PreSize;
        lnode->PreSize=lnode->PreSize+allocate->size;
    }
    else{
        printf("\nMemory is not enough.\n");                    //If not enough, print as this.
        return 0;
    }
    //If no free, enough memory found at the middle. Program gets memory from the main free portion.
    temp->prev->next=allocate;
    allocate->prev=temp->prev;
    allocate->next=temp;
    temp->prev=allocate;
    allocate->avail=1;

}

int Terminate(){                                    //Function to terminate a program.
    node *temp,*preptr,*ptr;
    temp=fnode;
    char prog[10];
    printf("\nTerminate: ");
    scanf("%s",&prog);
    if(strcmp(prog,"Free")==0){                 //Stop terminating, if the user gives the program name as 'Free'
        printf("\n---------------------------------------------------\n");
        printf("\n          '%s' is an invalid termination.\n",prog);           //If name given as 'Free', Prints this.
        printf("\n---------------------------------------------------\n");
        return 0;                                                               //Stop executing the function.
    }
    int result=strcmp(temp->pro_name,prog);                         //Variable to store the output of strcmp function.
    while(1){                                                       //Loop to check whether the given program is exist. 
        if(temp->next!=NULL){
            if(result!=0){
                temp=temp->next;
                result=strcmp(temp->pro_name,prog);
            }
            else{
                break;                                      //If exist, getting out from the loop while the 'temp' points to that node.
            }
        }
        else{
            printf("\n---------------------------------------------------\n");
            printf("\n               '%s' doesn't exist.\n",prog);                  //If the given program name doesn't exist, print this.
            printf("\n---------------------------------------------------\n");
            return 0;
        }
    }
    if(temp->prev->avail==0&&temp->next->avail==0){             //Check whether the previous and next nodes are free. 
        ptr=temp->prev;                                         //If free, then merge free spaces into one.    
        temp->next->PreSize=ptr->PreSize;
        ptr->prev->next=temp->next;
        temp->next->prev=ptr->prev;
        free(temp);
        free(ptr);
        return 0;
    }
    if(temp->prev->avail==0&&temp->next==lnode){               //Check whether the previous nodes is free and the next node is last node.
        ptr=temp->prev;                                        //If true then merge the free spaces into one.
        lnode->PreSize=ptr->PreSize;
        ptr->prev->next=lnode;
        lnode->prev=ptr->prev;
        free(temp);
        free(ptr);
        return 0;
    }
    if(temp->prev->avail==0||temp->next->avail==0||temp->next==lnode){      //Check whether the previous or next nodes is free or the next node is lastnode.
        if(temp->prev->avail==0){                                           //If previous one is free then merge spaces into one.
            ptr=temp->prev;                                                
            temp->PreSize=ptr->PreSize;
            ptr->prev->next=temp;
            temp->prev=ptr->prev;
            free(ptr);
            strcpy(temp->pro_name,"Free");
        }
        else if(temp->next==lnode){                                         //If next node is last node then merge spaces into one.
            lnode->PreSize=temp->prev->PreSize+temp->prev->size;
            temp->prev->next=lnode;
            lnode->prev=temp->prev;
        }
        else{                                                                 
            ptr=temp->next;                                                 //If next one is free then merge spaces into one.
            ptr->PreSize=temp->PreSize;
            temp->prev->next=ptr;
            ptr->prev=temp->prev;
        }
    }
    strcpy(temp->pro_name,"Free");                 //If none of these conditions satisfied, then just rename the relevent program name as 'Free'.
    temp->avail=0;                                 //If a program terminated, the availability of that particular node sets as '0'.
}

void PrintBlock(){                                  //Function to display the memory structure.
    node *temp;
    temp=fnode;
    while(temp->next!=NULL){
        printf("\n%10dK +------------------------+",temp->PreSize);
        printf("\n            |  %s",temp->pro_name);
        temp=temp->next;
    }
    if(temp->PreSize<temp->size){
        printf("\n%10dK +------------------------+",temp->PreSize);
        printf("\n            |  %s\n",temp->pro_name);
        printf("%10dK +------------------------+\n",temp->size);
    }
    else{
        printf("\n%10dK +------------------------+\n",temp->PreSize);
        printf("\n---Memory is full, terminate a program or exit.---\n");
    }
}

int main(){
    int n;
    lnode=(node*)malloc(sizeof(node));                      //allocate memory for last node.
    lnode->prev=NULL;
    strcpy(lnode->pro_name,"Free");                         //set the program name of the last node as 'Free'.
    printf("\nEnter the memory size: ");    
    scanf("%d",&lnode->size);                               //getting total memory size from the user.

    fnode=(node*)malloc(sizeof(node));                      //Allocate memory for first node.
    fnode->prev=NULL;
    strcpy(fnode->pro_name,"Operating System");              //set the program name as 'Operating System'
    fnode->PreSize=0;
    fnode->avail=1;
    printf("\nEnter the allocation size for OS: ");           //getting the size of the OS from the user.
    scanf("%d",&n);
    if(n<=lnode->size){                                   //Check the size of the OS is less than or equal to the total size of the memory.
        fnode->size=n;
        lnode->PreSize=n;
        fnode->next=lnode;                              //Link the first node and the last node.
        lnode->prev=fnode;
        lnode->next=NULL;
        PrintBlock();
    }
    
    else{                                           
        printf("\nMemory is not enough.\n");            //If OS size is too big, then print as this.
        return 0;
    }
    
    
    int option;
    
    //Loop to get user oprions until user exit.
    do{
        printf("\n\n************************\n");
        printf("\n Enter 1 for allocate.\n Enter 2 for terminate.\n Enter 3 for exit.\n");
        printf("\n************************\n");
        printf("\nEnter your option: ");
        scanf("%d",&option);                    //getting the option from the user.

        //Switch to check user option and call relevent functions according to it.
        switch (option)
        {
            case 1:
                MemAlloc();
                PrintBlock();
                break;
            case 2:
                Terminate();
                PrintBlock();
                break;
            case 3:
                printf("\n!----------Exit----------!\n");
                getch();
                break;
            default:
                printf("\n!----------Invalid Option----------!\n");
                break;
        }
    }while(option!=3);
}