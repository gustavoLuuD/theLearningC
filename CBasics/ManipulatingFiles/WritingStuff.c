#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *p = fopen("teste.txt","w");
  fputc('M',p);
  fputs("AMAAAAA UUUHHHH",p);
  fclose(p);
  return 0;
}
