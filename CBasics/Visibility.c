#include <stdio.h>

int i = 50;

int main(void){
  printf("%i\n",i);
  {
    int i = i + 1000;//create another i
    printf("%i\n",i);
    {
      int i = 1 - 150; //create the third
      printf("%i\n",i);
    } //this i ends here
    printf("%i\n",i);
  }//this i ends here
  printf("%i\n",i);
  return 0;
}
