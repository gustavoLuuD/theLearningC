#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printIds(char* ids){
  for(int i = 0; i < 5; i++){
    printf("%s\n", ids[i]);
  }
}


int main(void){
    char id[3];

    for(int i = 0; i < 5; i++){
      printf("Insert your id-> :");
      scanf(" %s", id);
      printId(id);
    }

  return 0;
}
