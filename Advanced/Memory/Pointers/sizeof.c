#include <stdio.h>

size_t getSize(float *arrayPtr);
int getLength(float *arrayPtr);

int main(){
  float array[20];
  printf("O numero de bytes do seu array eh %d\n", sizeof(array));
  printf("O numero de bytes retornados pelo getSize eh %d\n",getSize(array));
  printf("A largura do seu array eh %d\n",sizeof(array)/ sizeof(array[0]));
  return 0;
}

//retorna o tamanho de ptr
size_t getSize(float *arrayPtr){
  return sizeof(*arrayPtr);
}
