#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *f = fopen("texte.txt","wb");
  double d = 12.3;
  int i = 101;
  long l = 123023L;

  fwrite(&d, sizeof(double),1,f);
  fwrite(&i, sizeof(int),1,f);
  fwrite(&l, sizeof(long),1,f);

  rewind(f);

  fread(&d, sizeof(double), 1, f);
  fread(&i, sizeof(int), 1, f);
  fread(&l, sizeof(long), 1, f);
  printf("%f %d %ld \n", d, i,l);
  fclose(f);
  return 0;
}
