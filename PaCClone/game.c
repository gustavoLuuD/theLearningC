#include <stdio.h>
#include <stdlib.h>

char map[5][10 + 1];
int lines;
int collumns;

int main(){
  //added + 1 because of /n
  FILE *fmap;
  fmap = fopen("map.txt", "r");
  if(fmap == 0){
    printf("Failed to load the map\n");
    exit(1);
  }
  fscanf(fmap, "%d %d", &lines, &collumns);
  
  for(int i = 0; i < 5; i++){
    //we pass just the line
    fscanf(fmap, "%s", map[i]);
  }
  //printing the matrix with less code
  for(int i = 0; i < 5; i++){
    printf("%s\n", map[i]);
  }
  fclose(fmap);
  return 0;
}
