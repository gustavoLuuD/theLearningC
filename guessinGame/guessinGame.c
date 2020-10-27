#include <stdio.h>

int main(){
  printf("**********************************\n");
  printf("*  Welcome to the guessing game! *\n");
  printf("**********************************\n");

  int secretNumber = 42;

  int guess;
  int numberOfAttempts = 3;
  int gotIt = 0;
  do{
    printf("Attempts left: %d\n",numberOfAttempts);
    printf("What is your guess? ");
    scanf("%d", &guess);
    gotIt = (guess == secretNumber);

    if(gotIt){
      printf("You are goddam right ;)\n\n");
    }
    else if(guess < secretNumber){
      printf("The secret number is lower\n\n");
    }
    else {
      printf("The secret number is higher\n\n");
    }
    numberOfAttempts--;
  }while (!gotIt && numberOfAttempts > 0);

  if(numberOfAttempts == 0){
    printf("YOU LOSE\n");
  }
  else{
    printf("YOU WIN\n");
  }
  return 0;
}
