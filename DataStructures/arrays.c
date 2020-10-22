#include <stdlib.h>
#include <stdio.h>
#define TAM_ARRAY 5
void swap(int a , int b, int *array){
  printf("swapped array[%i] = (%i) with array[%i] = (%i)\n",a, b, array[a], array[b]);
  int aux = array[a];
  array[a] = array[b];
  array[b] = aux;
}
//this is how we show all the elements on the array
void printArray(int array[TAM_ARRAY]){
  for(int i = 0; i < TAM_ARRAY; i++){
    printf("array[%i]-> %i\n", i, array[i]);
  }
  printf("\n\n\n");
}

//just remembering that 0 is the first position of the array
int main(void){
  int array[] = {1,2,3,4,5};
  int array2[5];
  printArray(array);

  //the code above gives an error, please do not do this:).
  // printf("array2[1]-> %i\n",array2[7]);

  //we can assign a position of the array by doing this
  array[4] = 8;
  //now we show the array with the new element on the 5th position witch is array[4]
  printArray(array);
  //by the way we can get the size of the array by dividing the result of sizeof(array) by the size of the first element
  int size = sizeof(array)/sizeof(array[0]);
  printf("Your array has this size: %i\n",size);
  //bonus
  swap(1, 2, array);
  printArray(array);
  return 0;
}
