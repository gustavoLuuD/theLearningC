#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void){
  char stuff[100];

  printf("Hey write some stuff here ->");
  scanf(" %s", stuff);
  //on scanf we use %[^\n]s to read strings with blankspaces
  printf("\n is %[^\n]s what you said?",stuff);
  printf("\n Congrats now you know how to read a string from the keyboard yey");
  printf("\nNow go learn something more useful :) , and stop playing arround");

  return 0;
}
