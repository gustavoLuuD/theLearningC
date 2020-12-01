#include <stdio.h>
#include <stdlib.h>
#include  "map.h"



void readmap(MAP *m){
  FILE *fmap;

  fmap = fopen("map.txt", "r");
  if(fmap == 0){
    printf("Failed to load the map\n");
    exit(1);
  }

  fscanf(fmap, "%d %d", &m->lines, &m->collumns);

  allocmap(m);

  for(int i = 0; i < m->lines; i++){
    //we pass just the line
    fscanf(fmap, "%s", m->matrix[i]);
  }

  fclose(fmap);
}

void allocmap(MAP* m){
  m->matrix = malloc(sizeof(char*) * m->lines);

  for(int i = 0; i < m->lines; i++){
    m->matrix[i] = malloc(sizeof(char) * (m->collumns + 1));
  }
}

void printmap(MAP *m){
  //printing the matrix with less code
  for(int i = 0; i < 5; i++){
    printf("%s\n", m->matrix[i]);
  }
}

void freemap(MAP *m){
  for(int i = 0; i < m->lines; i++){
    free(m->matrix[i]);
  }
  free(m->matrix);
}
