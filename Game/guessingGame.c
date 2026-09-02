#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>

/*
 * OBJ = Create a word guessing game.
 * - Import and declare the random class to a variable.
 * - Accept repeated user input until the user guesses the number.
 *
 *  ------------------------------------------------------------
 *
 * MAKE A COMPILABLE GUESSING GAME
 * include the input/output library
 *
 * main funtion
 *   declare variables
 *   greet user
 *   collect user input
 *   
 *   while user has not guessed correctly
 *     if guessed number > correct number
 *     if else guessed number < correct number
 *     if guessed number == correct number
 *
 *   user has guessed correctly!
 *
 * return 0
 */

int main(){
  
  srand(time(NULL));
  
  // Declare the random
  int randomNum = rand() % 101;
  int guess;
  bool running = true;
  int i = 0;
  char userAns;
  char yes = 'y';
  char no = 'n';

  printf("Hey there, nice to meat you! \n");

  printf("Do you wanna play a guessing game? (y/n):");
  scanf("%c", &userAns);

  if(tolower(userAns) == yes){

    // Using a while loop to repromt the user if the undesired
    // number is entered
    while (running) {

      // Declaring users guess
      i ++; // Counting # of guesses

      printf("Guess the number!! ");
      scanf("%d", &guess); // user input

      // Is the guessed number correct
      // inside loop
      if(guess > randomNum){
        printf("Too high!! \n");
      }
      else if (guess < randomNum){
        printf("Too low!! \n");
      }
      else if (guess == randomNum){
         printf("Congrats, you guessed correctly!! \n");
	 running = false;
      }

    } // end while loop

    // How many times the user guessed
    printf("Number of guesses: %d \n", i);  
  }
  else {
    printf("Sorry you didn't want to play, have a good one!! \n");
  } // end if statement

  return 0;

} // end main
