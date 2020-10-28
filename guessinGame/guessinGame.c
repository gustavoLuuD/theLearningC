#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  printf("**********************************\n");
  printf("*  Welcome to the guessing game! *\n");
  printf("**********************************\n");

  int seconds = time(0);
  srand(seconds);
  int random = rand();
  int secretNumber = random % 100;
  int score = 1000;
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
    else if(guess > secretNumber){
      printf("The secret number is lower\n\n");
    }
    else {
      printf("The secret number is higher\n\n");
    }
    int lostscore = (guess - secretNumber) / 2;
    score -= lostscore;
    numberOfAttempts--;
  }while (!gotIt && numberOfAttempts > 0);

  if(numberOfAttempts == 0 && gotIt == 0){
    printf("YOU LOSE\n");
    printf("The secret number was %i\n",secretNumber);
  }
  else{
    printf("YOU WIN\n");
    printf("score: %d\n", score);
  }
  return 0;
}
