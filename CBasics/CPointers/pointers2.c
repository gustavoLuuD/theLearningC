#include <stdio.h>

int main(void){
  int a = 10;
  int b = 20;
  int *p1 = &a;
  int *p2 = &b;

  printf("a = %i\n",a);
  printf("b = %i\n",b);
  printf("p1 -> %i\n",*p1);
  printf("p2 -> %i\n",*p2);
  printf("p1 &-> %p\n",p1);
  printf("p2 &-> %p\n\n",p2);
  /*
  p1 = p2;//faz com que os dois ponteiros apontem para o mesmo local
  printf("a = %i\n",a);
  printf("b = %i\n",b);
  printf("p1 -> %i\n",*p1);
  printf("p2 -> %i\n",*p2);
  printf("p1 &-> %p\n",p1);
  printf("p2 &-> %p\n\n",p2);
  */
  *p1 = *p2;//atribui o conteúdo de p2 no conteúdo de p1
  printf("a = %i\n",a);
  printf("b = %i\n",b);
  printf("p1 -> %i\n",*p1);
  printf("p2 -> %i\n",*p2);
  printf("p1 &-> %p\n",p1);
  printf("p2 &-> %p\n\n",p2);
  return 0;
}
