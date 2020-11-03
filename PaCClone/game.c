#include <stdio.h>
#include <stdlib.h>
#include "game.h"

char **map;
int lines;
int collumns;

void freemap(){
  for(int i = 0; i < lines; i++){
    free(map[i]);
  }
  free(map);
}

void readmap(){
  FILE *fmap;

  fmap = fopen("map.txt", "r");
  if(fmap == 0){
    printf("Failed to load the map\n");
    exit(1);
  }
  fscanf(fmap, "%d %d", &lines, &collumns);
  allocMap();

  for(int i = 0; i < lines; i++){
    //we pass just the line
    fscanf(fmap, "%s", map[i]);
  }
  fclose(fmap);
}

void allocMap(){
  map = malloc(sizeof(char*) * lines);

  for(int i = 0; i < lines; i++){
    map[i] = malloc(sizeof(char) * (collumns + 1));
  }
}

char **map;
int main(){
  readmap();
  //printing the matrix with less code
  for(int i = 0; i < 5; i++){
    printf("%s\n", map[i]);
  }

  freemap();

  return 0;
}
