#include <stdio.h>
int main(){
	int x,y;
	int num=21;
	
	int cond1=(num-1)/2;
	int cond2=(3*num/2-1);
	
	for(x=0;x<num;x++){
		for(y=0;y<num;y++){
			if(y-x==cond1 || x+y==cond2 || x==cond1){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}