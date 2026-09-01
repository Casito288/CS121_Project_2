#include <stdio.h>
#include <string.h>

// h1 linuz
// illustrates string functions and if statement

int main(){
  char userName[20];
  char correct[20];

  //correct = "Linus"
  strcpy(correct, "Linus");

  printf("Correct is %s \n", correct);

  printf("What is your name? ");
  scanf("%s", userName);

  iF (strcmp(userName, correct) == 0){
    printf("Thanks for inventing linux. \n");

  }else {
    printf("have you seen linus around? \n");
  } // end if

  return 0;
}
