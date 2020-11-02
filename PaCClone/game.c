#include <stdio.h>
#include <stdlib.h>

int main(){
  char map[5][10];
  map[0][0] = '|';
  map[4][9] = '@';
  printf("%c ... %c\n",map[4][9], map[0][0]);
  return 0;
}
