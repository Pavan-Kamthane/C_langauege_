#include <stdio.h>
void main()
{
	//variable declaration
	int x,y,z; 
	
	int height=3,width=4;
	int space=width*5;
	
	int r=1;
	int m=1;
	
	//tree upper part loop
	for(r=1;r<=height;r++){
		for(x=m;x<=width;x++){
			for(y=space;y>=x;y--){
				printf(" ");
			}
			for(z=1;z<=x;z++){
				printf("* ");
			}
			printf("\n");
		}
		
		m+=2;width+=2;	
	}
	
	//tree lower part loop
	for(x=1;x<=4;x++){
		for(y=space-3;y>=1;y--){
			printf(" ");
		}
		for(z=1;z<=4;z++){
			printf("* ");
		}
		printf("\n");
	}	

}