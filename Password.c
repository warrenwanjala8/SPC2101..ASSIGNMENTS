/*
Name;Warren Wanjala
Reg No;PA106/G/29294/25
Description;Program toprompt the user to enter a correct password
*/

#include <stdio.h>
#include <strings.h>

//main function
int main()
{
char password[5]; //Buffer for password input(4 digits + null terminator)
int attempt = 0;
int correct = 0;

do {
printf("enter the password:");
scanf("%s",password);
attempt++;

if(strcmp(password,"1234") == 0) {
	correct = 1;
} else {
	printf("incorrect password. Try again.\n");
}
}while(!correct);

printf("Access Granted!\n");
printf("Total number of attempt: %d\n");

return 0;
		
}