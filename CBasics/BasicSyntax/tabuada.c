#include <stdio.h>
#include <stdlib.h>

void calculate(int* number){
  for(int i = 1; i <= 10; i++){
    printf("%d . %d = %d \n",(*number), i, (*number) * i);
  }
}
int main(){
  int number;
  printf("Please write a value:");
  scanf("%d",&number);

  calculate(&number);
  return 0;
}
