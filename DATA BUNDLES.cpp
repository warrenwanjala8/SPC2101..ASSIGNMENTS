/*
Name;Warren wanjala
Reg no;PA106/G/29294/25
Description;program to display mobile data purchase
*/
#include <stdio.h>

//main function
int main()
{
int choice;

printf("select data bundles:\n");
printf("1.100 MB @ 50ksh\n");
printf("2.500MB@ 200ksh\n");
printf("3.1GB@ 350ksh\n");
printf("4.2GB@ 600ksh\n");
printf("Enter your choice");
scanf("%d",&choice);

switch(choice){
	case 1:
		printf("you selected 100MB.cost=50ksh\n");
		break;
	
	case 2:
		printf("you selected 500MB.cost=200ksh\n");
		break;
	
	case 3:
		printf("you selected 1GB.cost=350ksh\n");
		break;
	case 4:
		printf("you selected 2GB.cost=600ksh\n");
		break;
	default:
		printf("Invalid choice please enter a number between 1 and 4.\n");
}
	return 0;
}