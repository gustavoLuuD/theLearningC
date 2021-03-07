#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *p = fopen("hello.txt", "r");
  int ch;

  if(p != NULL){
      printf("File successfully opened\n");
      do{
        ch = fgetc(p);
        printf("%c",(char)ch);
      }while(ch != EOF);
      fclose(p);
  } else{
    printf("Unable to open the file\n");
  }
  return 0;
}
