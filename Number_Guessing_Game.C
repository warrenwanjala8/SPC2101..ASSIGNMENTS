/*
NAme;Warren Wanjala
Reg no;PA106/G/29294/25
Description;program to implement a number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//mainfunction
int main(){
srand(time(NULL));
int secret = rand() % 20 + 1;
int guess;
int attempts = 0;

while(true){
printf("Enter a guess:\n");
scanf("%d",&guess);
attempts++;
if (guess == secret) {
	break;
}

	if (guess > secret){
		printf("Too high!\n");
} else {
	printf("Too low!\n");	
}
printf("Enter a guess: ");
scanf("%d", &guess);
attempts++;
}

printf("Congratulations! It took you %d attempts.\n",attempts);	

return 0;
}