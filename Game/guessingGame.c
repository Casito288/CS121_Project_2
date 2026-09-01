#include <stdio.h>
#include  <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/*
 * OBJ = Create a word guessing game.
 * - Import and declare the random class to a variable.
 * - Accept repeated user input until the user guesses the number.
 */

int main(){
  // Declare the random
  int randomNum = rand() % 100;
  bool running = true;
  int i = 0;
  char userAns;
  char yes = 'y';
  char no = 'n';

  printf("Hey there! Wanna play a guessing game? (y/n)");
  scanf("%c", &userAns);

  if(tolower(userAns) == yes){

    // Using a while loop to repromt the user if the undesired
    // number is entered
    while (running) {
      // Declaring users guess
      i ++;
      int guess;
      printf("Guess the number!! ");
      scanf("%d", &guess); // user input

      // Is the guessed number correct
      // inside loop
      if(guess > randomNum){
        printf("Too high!! Try again.");
      }
      else if (guess < randomNum){
        printf("Too low!! Try again.");
      }
      else if (guess == randomNum){
         printf("Congrats, you guessed correctly!! \n");
	 running = false;
      } // end if statements

    } // end while loop

    // How many times the user guessed
    printf("Number of guesses: %d \n", i);  
  }
  else {
    printf("Sorry you didn't want to play, have a good one!! \n");
  }

  return 0;

} // end main
