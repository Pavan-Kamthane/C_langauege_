#include <stdio.h>

int main(){
	int x,y;	//variable declaration
	int num=10; //row of the heart
	
	//upper part of the heart
	for(x=num/2;x<=num;x+=2){
		for(y=1;y<num-x;y+=2){
			printf(" ");	
		}
		for(y=1;y<=x;y++){
			printf("*");
		}
		for(y=1;y<=num-x;y++){
			printf(" ");
		}
		for(y=1;y<=x;y++){
			printf("*");
		}
		printf("\n");	
	}
	
	//lower part of the heart
	for(x=num;x>=1;x--){
		for(y=x;y<num;y++){
			printf(" ");
		}
		for(y=1;y<=(x*2)-1;y++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
