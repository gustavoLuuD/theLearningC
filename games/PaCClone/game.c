#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "map.h"


MAP *m;


void move(char direction){
  int x;
  int y;
  //finding player's position
  for(int i = 0; i < m->lines; i++){
    for(int j = 0; j < m->collumns; j++){
      if(m->matrix[i][j] == '@'){
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
      m->matrix[x][y - 1] = '@';
    break;
    case 'w' :
      m->matrix[x - 1][y] = '@';
    break;
    case 'd':
      m->matrix[x][y + 1] = '@';
    break;
    case 's' :
      m->matrix[x + 1][y] = '@';
    break;
  }
  m->matrix[x][y] = '.';
}

int main(void){
  int i  = 0;
  m->lines = 10;
  m->collumns = 10;
  m->matrix[m->lines][m->collumns];
  readmap(m);
  do{
    printmap(m);

    char command;
    scanf(" %c", &command);
    move(command);
    i++;
  }while(i < 10);

  freemap(m);
  return 0;
}
