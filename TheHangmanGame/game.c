#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "game.h"

void stat();
void makeguess();
int alreadyguessed(char letter);
int hanged();
int won();
void drawn();

char secretword [20];
char guesses[26];
int attempts = 0;

void start(){
  printf("\t**********************************\n");
  printf("\t*         The hangman game       *\n");
  printf("\t**********************************\n\n");
}

void makeguess(){
  char guess;
  printf("\nMake a guess :");
  scanf(" %c", &guess);

  guesses[(attempts)] = guess;
  (attempts)++;
}

int alreadyguessed(char letter){
 int found = 0;

 for(int j = 0; j < attempts; j++){
   if(guesses[j] == letter){
     found = 1;
     break;
   }
 }
 return found;
}

int hanged(){
  int mistakes = 0;

  for(int i = 0; i < attempts; i++){
    int found = 0;

    for(int j = 0; j < strlen(secretword); j++){
      if(guesses[i] == secretword[j]){
        found = 1;
        break;
      }
    }
    if(!found) mistakes++;
  }
  return mistakes >= 5;
}

int won(){
  for(int i = 0; i < strlen(secretword); i++){
    if(!alreadyguessed(secretword[i])){
      return 0;
    }
  }
  return 1;
}
void drawn(){
  printf("\t");
  for(int i = 0; i < strlen(secretword); i++){

    //put a funcion here
    int found = alreadyguessed(secretword[i]);
    if(found){
      printf("%c", secretword[i]);
    }
    else{
      printf(" _ ");
    }
  }
  printf("\n");
}

int main(){
  sprintf(secretword, "MELANCIA");
  int gotit = 0;
  int level = 10;

  start();
  do{

    drawn();
    makeguess();

  } while(!won() && !hanged());
  return 0;
}
