#include <stdio.h>
#include  <stdlib.h>

/*
 * OBJ = Create a word guessing game.
 * - Import and declare the random class to a variable.
 * - Accept repeated user input until the user guesses the number.
 */

int main(){
	// Declare the random
	int randomNum = rand() % 100;
	
	// Using a while loop to repromt the user if the undesired
	// number is entered
	while true{
		// Declaring users guess
		int guess;
		printf("Guess the number!! ");
		// Collecting user input
		scanf("%d", &guess);
		
		// Determining if the guessed number is the correct number
		// inside loop
		if(guess > randomNum){
			printf("Too high!! Try again.");
		}
		else if (guess < randomNum){
			printf("Too low!! Try again.");
		}
		else if (guess == randomNum){
			printf("Congrats, you guessed correctly!!");
			break;
		}
	}	
	return 0;	
}
