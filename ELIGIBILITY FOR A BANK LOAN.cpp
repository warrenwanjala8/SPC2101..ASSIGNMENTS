/*
Name:Wanjala Seith Warren
Reg No:A106/G/29294/25
Description:program to check for eligibility for a bank loan
*/
#include <stdio.h>
//main function
int main(){
	int age;
	float income;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your income:");
	scanf("%f",&income);
	
	if (income>=21000 &age>=22){
	printf("congratulations youre eligible for a loan.\n");
	}else
	{
	printf("sorry,you do not qualify for the loan.\n");
	}
	
	return 0;
}