#include <stdio.h>
#include <stdlib.h>


int main(void){
  //we can alloc memory dinamically with malloc
  int *newnumber  = malloc(sizeof(int));
  *newnumber = 7;
  printf("%i\n", *newnumber);
  
  //free the memory is a good practice
  free(newnumber);
  return 0;
}
