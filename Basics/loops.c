#include <stdlib.h>
#include <stdio.h>
int main(void) {
  printf("\t\tstart of the for\n");
  for(int i = 0; i < 10; i++){
    printf("for %i < 10\n", i);
  }
  printf("\t\tEnd of the for\n", );
  int i = 10;
  while (i > 0) {
    printf("while %i > 0\n",i);
    i--;
  }
  /*//if you uncomment this you will have a infinite loop
    //please don't do this
    int j = 1000
    while (j > 100) {
      printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
    }
  */
  return 0;
}
