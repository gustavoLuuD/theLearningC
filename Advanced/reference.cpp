#include <iostream>
using namespace std;
/*em c++, para usarmos a passagem de parâmetros
por referência na declaração do método, no parâmetro
passado por referência colocamos o & após o tipo da variável.*/
int metodo(int&x, int y){
  int z;
  printf(" %i, %i ?\n",x, y);
}

int main(int argc, char **argv){
  int a, b, c;
  a = b =1;
  printf("%i, %i ?\n",a, b);
  c = metodo(a, b);
  printf("\n %i, %i, %d\n",a, b, c);
}
