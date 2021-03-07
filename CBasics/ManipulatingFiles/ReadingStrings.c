#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *p = fopen("hello.txt", "r");
  int str[100+1];
  char* resp;

  if(p != NULL){
      do{
        resp = fgets(str, 100, p);
        if(resp != NULL)
          printf("%s\n",str);
      }while(resp != NULL);
      fclose(p);
  } else{
    printf("Unable to open the file\n");
  }
  return 0;
}
