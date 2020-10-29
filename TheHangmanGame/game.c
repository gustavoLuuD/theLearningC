#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start(){
  printf("\t**********************************\n");
  printf("\t*         The hangman game       *\n");
  printf("\t**********************************\n\n");
}

void guess(char guesses[26], int attemps){
  char guess;
  printf("\nmake a guess :");
  scanf(" %c", &guess);

  guesses[attemps] = guess;
  attemps++;
}

int main(){
  char secretword [20];
  sprintf(secretword, "MELANCIA");
  char guesses[26];
  int attemps = 0;
  int gotit = 0;
  int hanged = 1;
  int level = 10;

  start();
  do{
    //loop that shows the _
    printf("\t");
    for(int i = 0; i < strlen(secretword); i++){

      int found = 0;

      for(int j = 0; j < attemps; j++){
        if(guesses[j] == secretword[i]){
          found = 1;
          break;
        }
        else{
        }
      }
      if(found){
        printf("%c", secretword[i]);
      }
      else{
        printf(" _ ");
      }
    }
    printf("\n");
    guess(guesses,attemps);
    attemps++;

  } while(attemps < level);
  return 0;
}
