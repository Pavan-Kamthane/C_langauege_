#include<stdio.h>
int main(){
	//variable declaration
	int num=20;
	int x,y;
	int px=1;
	
	
	for(x=1;x<=num;x++)
	{
		for(y=1;y<=num;y++){
			if(y<=px || y>=(num-px+1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		
		}
		if(x<=num/2)
		{
			px++;
		}
		else{
			px--;
		}
	
		printf("\n");
	}
	return 0;
}