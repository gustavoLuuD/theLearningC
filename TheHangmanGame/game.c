#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void start(){
  printf("\t**********************************\n");
  printf("\t*         The hangman game       *\n");
  printf("\t**********************************\n\n");
}

void makeguess(char guesses[26], int  *attempts){
  char guess;
  printf("\nMake a guess :");
  scanf(" %c", &guess);

  guesses[(*attempts)] = guess;
  (*attempts)++;
}

int main(){
  char secretword [20];
  sprintf(secretword, "MELANCIA");
  char guesses[26];
  int attempts = 0;
  int gotit = 0;
  int hanged = 1;
  int level = 10;

  start();
  do{
    //loop that shows the _
    printf("\t");
    for(int i = 0; i < strlen(secretword); i++){

      int found = 0;

      for(int j = 0; j < attempts; j++){
        if(guesses[j] == secretword[i]){
          found = 1;
          break;
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

    makeguess(guesses, &attempts);
  } while(attempts < level);
  return 0;
}
