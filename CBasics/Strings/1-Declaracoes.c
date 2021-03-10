#include <stdio.h>

int main(){
  //formas de se declarar uma string
  char color[] = "blue";
  char *color2 = "yellow";
  char color3[] = {'g','r','e','e','n','\0'};


  printf("color 1: %s\n",color);
  printf("color 2: %s\n",color2);
  printf("color 3: %s\n",color3);
  return 0;
}
