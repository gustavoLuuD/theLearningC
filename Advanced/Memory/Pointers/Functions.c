#include <stdio.h>
#include <stdlib.h>
//cubo de uma variavel passada por valor
int cubeByValue(int value);
void cubeByReference(int* value);

int main(){
    int number = 5;
    printf("O valor original de number eh %d\n", number);
    //number = cubeByValue(number);
    cubeByReference(&number);
    printf("O valor do novo number eh %d", number);
  return 0;
}

int cubeByValue(int value){
  return (value * value * value);
}

void cubeByReference(int* value){
  *value = (*value  * *value *  *value);
}
