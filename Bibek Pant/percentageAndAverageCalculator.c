//Program to calculate the average marks and percentage of user-inputted marks

//header files
#include <stdio.h>
#include <conio.h>
#include <math.h>

//main function begins
int main(){
	//variable declarations
	int numberOfSubjects, averageMarks, sum = 0,fullMark, i;
	float percentage;
	
	//asking the user with instructions
	printf("Average Marks and Percentage Calculator\n");
	printf("Hello User, how many subject's marks are there? Enter a number here: ");
	scanf("%d",&numberOfSubjects);
	printf("Please enter the full marks of the subjects: Enter a number here: ");
	scanf("%d",&fullMark);
	int marks[numberOfSubjects];
	
	//loops to store different marks in array of marks
	for(i = 0; i<numberOfSubjects; i++){
		printf("\nEnter mark of subject %d : ", i+1);
		scanf("%d",&marks[i]);
	}
	
	//calculating sum
	for(i=0; i<numberOfSubjects; i++){
		sum = sum + marks[i];
	}
	printf("\nTotal Marks Obtained: %d",sum);
	printf("\nAverage Marks Obtained: %0.2f",(float)sum/numberOfSubjects);
	
	//calculating percentage
	percentage = (float) sum/(numberOfSubjects * fullMark) * 100;
	printf("\nPercentage Obtained: %0.2f", percentage);
	return 0;
}