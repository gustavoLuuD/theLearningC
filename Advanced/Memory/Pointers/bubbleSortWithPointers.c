#include <stdio.h>
#define SIZE 10

void display(int array[]);
void swap(int *a, int *b);
void bubbleSort(int *const array, const int size);


int main(){
  int array[SIZE] = {1,5,65,78,777,45,33,2,3,4};
  bubbleSort(array,SIZE);
  display(array);
return 0;
}

void display(int array[]){
  printf("[ ");
  for(int i = 0; i < SIZE; i++){
    printf("%d ",array[i]);
  }
  printf(" ]");
}

void swap(int *a, int *b){
  int hold = *a;
  *a = *b;
  *b = hold;
}

void bubbleSort(int *const array, const int size){
  int pass; //contador de passadas
  int j; //contador de comparação
  for(pass = 0; pass < size - 1; pass++){
    for(j = 0; j < size - 1;  j++){
      if(array[j] > array[j + 1]){
        swap(&array[j], &array[j + 1]);
      }
    }
  }
}
