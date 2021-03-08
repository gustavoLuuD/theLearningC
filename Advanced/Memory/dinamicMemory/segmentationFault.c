#include <stdio.h>
//this is program will crash for obvious reasons
//so if you're not running it on a potato let's have a litte fun
void f1(char word[]){
  printf("%x\n",&word);
  f1(word);
}
int main(){
  char word[] = "Hello World";
  printf("from main %x\n",&word);
  f1(word);
  return 0;
}
