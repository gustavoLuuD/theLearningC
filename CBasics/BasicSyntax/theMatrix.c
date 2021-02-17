#include <stdlib.h>
#include <stdio.h>

void mostra(int linesize, int *matrix){
  for(int i = 0; i < linesize; i++){
    for(int j  = i; j < linesize; j++){
      printf("%i", *matrix[i][j]);
    }
    printf("\n");
  }
}


int main(void){
  int matrix[10][10];

  for(int i = 0; i < 10; i++){
    for(int j  = i; j < 10; j++){
      matrix[i][j] = 0;
    }
  }
  mostra(10, matrix);
  //Matrices pointers of pointers **p
  //We can malloc a matrix like this
  int **v = malloc(sizeof(int*) * 5);
  for(int i = 0; i < 5; i++){
    v[0] = malloc(sizeof(int) * 10);
  }
  int matrix[10][10];

  for(int i = 0; i < 5; i++){
    for(int j  = i; j < 5; j++){
      matrix[i][j] = 1;
    }
  }
  mostra(5, v);
  //we free our matrix like this
  for(int i = 0; i < 5; i ++){
    free(v[i]);     //first we free the "inside" pointers
  }
  free(v);    //then we free the master pointer

  return 0;
}
