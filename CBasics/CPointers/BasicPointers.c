#include <stdio.h>
#include <stdlib.h>

int main(void){
  int a = 10;
  int *ap = &a;

  printf("this is where the memory adress -> %i\n", ap);
  printf("this is the value of where the pointer points -> %i\n", *ap);
  printf("this is a -> %d\n", a);
  printf("this is where a is located -> %d\n", &a);

  if(*ap == a){
    printf("same stuff\n");
  }
  else{
    printf("different stuff\n");
  }


  if(ap == &a){
    printf("same place\n");
  }
  else{
    printf("different place\n");
  }
  return 0;
}
