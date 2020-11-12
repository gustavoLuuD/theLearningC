#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  double pi = 3.14;
  double b = 5.6;
  double rounded = floor(b);
  printf("the floor of the number-> %f\n", rounded);

  rounded = ceil(pi);
  printf("this is another way to round-> %f\n", round(pi));
  printf("the ceil of the pi-> %f\n", rounded);

  return 0;
}
