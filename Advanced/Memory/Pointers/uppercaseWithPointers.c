#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void convertToUpperCase(char* sPtr);

int main(void){

  char string[]  = "I follow the moskva down to Gorky Park";
  printf("Sua string antes da conversao -> %s\n", string);
  convertToUpperCase(string);
  printf("Sua string depois da conversao -> %s\n",string);

  return 0;
}

void convertToUpperCase(char *sPtr){
  while(*sPtr != '\0'){
      if(islower(*sPtr)){
        *sPtr = toupper(*sPtr);
      }
    ++sPtr;//operacao de pre incremento
  }
}
