/*
Name;Warren Wanjala
Reg no;PA106/G/29294/25
Description;program to check for exam eligibility
*/
//main function
#include <stdio.h>

int main(){
	float attendancepercentage ,average_marks;
	printf("Enter your attendancepercentage:");
	scanf("%f",&attendancepercentage);
	
	printf("Enter your average_marks:");
	scanf("%f",&average_marks);
	
	if(attendancepercentage>=75&&average_marks>=40)
		printf("you are eligible for the exam:");
	else{
		
		printf("not eligible for exam:");
		
	}
	return  0;
}