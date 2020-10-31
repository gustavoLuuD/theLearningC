#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "game.h"

char secretword[20];
char guesses[26];
int attempts = 0;

void start(){
  printf("\t**********************************\n");
  printf("\t*         The hangman game       *\n");
  printf("\t**********************************\n\n");

  choosesecretword();
}

void makeguess(){
  char guess;
  printf("\nMake a guess :");
  scanf(" %c", &guess);

  guesses[(attempts)] = guess;
  (attempts)++;
}
void choosesecretword(){
  FILE *f;

  f = fopen("fruits.txt", "r");
  if(f == 0){
    printf("\aERROR, could not open databank :( )\n");
    exit(1);
  }

  int numberofwords;
  fscanf(f, "%d", &numberofwords);


  srand(time(0));
  int randomnumber = rand() % numberofwords;

  for(int i = 0; i < randomnumber; i++){
    fscanf(f, "%s", secretword);
  }
  printf("secretword -> %s\n",secretword);
  fclose(f);
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

void addword(){
  char newword[25];
  printf("wich word do you want to add?\n");
  scanf(" %s", newword);

  FILE *f;
  f = fopen("fruits.txt", "r+");

  if(f == 0){
    printf("\aERROR, could not open databank :( )\n");
    exit(1);
  }

  int quantity;
  fscanf(f,"%d", &quantity);
  quantity++;

  //sets the head to the first line
  fseek(f,0, SEEK_SET);

  fprintf(f, "%d",quantity);

  //sets the head to the last line
  fseek(f,0, SEEK_END);
  fprintf(f, "\n%s",newword);

  fclose(f);
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
  addword();
  return 0;
}
