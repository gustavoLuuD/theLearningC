#include <stdio.h>
#include <stdio.h>
#include <string.h>

void displayNames(char** names, int quantity);

int main(){
  /*duas formas de declararmos um array de strings*/
  char names[4][50];
  char* names2[4];

  //atribuindo valores a primeira
  strcpy(names[0], "Jhon");
  strcpy(names[1], "Jack");
  strcpy(names[2], "Bill");
  strcpy(names[3], "BOB");

  //atribuindo valores a segunda
  names2[0] = "Jhon";
  names2[1] = "Jack";
  names2[2] = "Bill";
  names2[3] = "BOB";

  int quantity = 4;
  printf("%d\n",*names2);
  displayNames(names2, quantity);
  return 0;
}

void displayNames(char** names, int quantity){
  printf("%d\n",*names);
  for(int i = 0; i < quantity; i++){
    printf("%s\n",names[i]);
  }
}
