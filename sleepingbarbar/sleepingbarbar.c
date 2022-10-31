#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int n,front=0,rear=0,count=0;           /*variable 'n' to get number of chairs. front and rear is to represent
                                        front end and back end of the queue and count is to get the client count*/

//Functions to add colors.
void red()
{
    printf("\033[0;31m");
}
void green() 
{
  printf("\033[0;32m");
}
void reset() 
{
  printf("\033[0m");
}

int enqueue(int arr[n]){                            //Function to enqueue clients to the circular queue.
    int client=0;
    printf("\nEnter how many clients arrived: ");
    scanf("%d",&client);                                    //getting how many clients were came.
    if(count==n){                                               //If almost full, print as this.
        printf("\nSorry, barbershop is almost full.\n");
    }
    else if(count==0){                                                  //If no clients clients are there and new one or more came, then he has to wake the barber.
        printf("\nBarber is asleep, press 'Enter' to wake him.\n");
        getch();                                                           //Press a key to wake the barber.
        if(client==1){                                                     //If one client came at the begining, he will get directly to the barber room.
            printf("\nPlease come in to the barber room.\n");
        }
        else{                                                             //If there are more clients, then they have to stay in the waiting room.
            printf("\n---%d clients arrived.---\n\nOne client come in to the baber room, others sit in the waiting room.\n",client);
        }
        for(int i=0;i<client;i++){                         //Allocating chairs for clients. 
            if(count!=n){
                arr[rear]=1;                               //Enqueye '1', if allocated a chair to a client.
                rear=(rear+1)%n;                           //increment the rear position.
                count++;                                   //increment the client count by one.
            }
            else{
                red();                                     //If more clients came and there are no more chairs for some of them, then they have to leave.
                printf("\nSorry, barbershop is almost full. %d clients have to leave.\n",client-n);
                reset();
                break;
            }
        }
    }
    else{                                          //If clients came and there are enough chairs then they have to wait in the waiting room.
        printf("\n---%d clients arrived.---\n\nBarber is busy please sit in the waiting room.\n",client);
        int capacity=count;
        for(int i=0;i<client;i++){                  //Allocating chairs for clients.
            if(count!=n){
                arr[rear]=1;                         //Enqueye '1', if allocated a chair to a client.
                rear=(rear+1)%n;                     //increment the rear position.
                count++;                             //increment the client count by one.
            }
            else{                                   //If more clients came and there are no more chairs for some of them, then they have to leave.
                printf("\nSorry, barbershop is almost full. %d clients have to leave.\n",capacity+client-n);
                break;
            }
        }
    }
}
//Function to dequeue a client from the queue when the cutting job is over.
int dequeue(int arr[n]){
    if(count>0){                //Check whether there are clients in the waiting room.
        front=(front+1)%n;      //Increment the front to release the first client because the cutting is over.
        count--;                //Decrement the client count by one.
    }
    if(count==0){                   //If there are no more clients, barber goes to sleep.
        printf("\nNo clients, barber goes to sleep.\n");
    }
    else{
        printf("\nHair Cutting Of The Client Is Over.\nNext Client Come In.\n");
        
    }
}

int main(){
    printf("Enter How Many Chairs Are There In Barbershop: ");
    scanf("%d",&n);                                             //getting the number of chairs from the user.
    int array[n],option;                             //Queue is implement using the array and option is to get the user choice.
    
    printf("\n1 - Clients Arrived.\n2 - Hair Cutting Is Over\n3 - Shop is closing.\n");
    do{
        green();
        printf("\n------------------------------------------------------------\n\nEnter Your Option: ");
        scanf("%d",&option);
        printf("\n------------------------------------------------------------\n");
        reset();
        //Switch to call relevent functions according to the user input.
        switch (option)
        {
            case 1: 
                enqueue(array);
                break;
            case 2:
                dequeue(array);
                break;
            case 3:
                printf("\n-----------Shop Closed.-----------\n");
                getch();
                break;
            default:
                printf("\n-----------Invalid Option.-----------\n");
                break;
        }
    }while(option!=3);
}