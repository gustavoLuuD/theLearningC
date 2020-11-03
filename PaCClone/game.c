#include <stdio.h>
#include <stdlib.h>
#include "game.h"

MAP m;

void readmap(){
  FILE *fmap;

  fmap = fopen("map.txt", "r");
  if(fmap == 0){
    printf("Failed to load the map\n");
    exit(1);
  }

  fscanf(fmap, "%d %d", &m.lines, &m.collumns);

  allocmap();

  for(int i = 0; i < m.lines; i++){
    //we pass just the line
    fscanf(fmap, "%s", m.matrix[i]);
  }

  fclose(fmap);
}

void allocmap(){
  m.matrix = malloc(sizeof(char*) * m.lines);

  for(int i = 0; i < m.lines; i++){
    m.matrix[i] = malloc(sizeof(char) * (m.collumns + 1));
  }
}

void printmap(){
  //printing the matrix with less code
  for(int i = 0; i < 5; i++){
    printf("%s\n", m.matrix[i]);
  }
}

void freemap(){
  for(int i = 0; i < m.lines; i++){
    free(m.matrix[i]);
  }
  free(m.matrix);
}
void move(char direction){
  int x;
  int y;
  //finding player's position
  for(int i = 0; i < m.lines; i++){
    for(int j = 0; j < m.collumns; j++){
      if(m.matrix[i][j] == '@'){
        x = i;
        y = j;
        break;
      }
    }
  }
  int gameover(){
    return 0;
  }

  switch (direction) {
    case 'a':
      m.matrix[x][y - 1] = '@';
    break;
    case 'w' :
      m.matrix[x - 1][y] = '@';
    break;
    case 'd':
      m.matrix[x][y + 1] = '@';
    break;
    case 's' :
      m.matrix[x + 1][y] = '@';
    break;
  }
  m.matrix[x][y] = '.';
}

int main(void){
  int i  = 0;
  m.lines = 10;
  m.collumns = 10;
  m.matrix[m.lines][m.collumns];
  readmap();
  do{
    printmap();

    char command;
    scanf(" %c", &command);
    move(command);
    i++;
  }while(i < 10);

  freemap();
  return 0;
}
