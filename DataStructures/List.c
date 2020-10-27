#include <stdlib.h>
#include<stdio.h>
#define MAX_SIZE 100
int list[MAX_SIZE];
int size = 0;

//insertion functions
void insertBeginning(int x){
  if(size > MAX_SIZE){
    printf("List overflow");
    exit(1);
  }

  for(int i = size; i > 0; i--){
    list[i] = list[i - 1];
  }

  list[0]  = x;
  size++;
}
void insertEnd(int x){
  if(size > MAX_SIZE){
    printf("List overflow\n");
    exit(1);
  }
  list[size] = x;
  size++;
}
void insert(int x, int pos){
  if(size >= MAX_SIZE || pos > size || pos < 0){
    printf("List error\n");
    exit(1);
  }
  for(int i = size; i > pos; i--){
    list[i] = list[i - 1];
  }
  list[pos] = x;
  size++;
}
//removal functions
int removeBeginning(){
    if(size == 0){
      printf("Empty list\n");
      exit(1);
    }
    int removed = list[0];
    for(int i = 0; i < size; i++){
      list[i] = list[i + 1];
    }
    size--;
    return removed;
}
int removeEnd(){
  if(size == 0){
    printf("Empty list\n");
    exit(1);
  }
  return list[--size];
}
int removePosition(int pos){
  if(size == 0 || pos < 0 || pos > size){
    printf("List ERROR\n");
    exit(1);
  }
  int removed = list[pos];
  for(int i = pos; i < size; i++){
    list[i] = list[i + 1];
  }
  size--;
  return removed;
}
void show(){
  for(int i = 0; i < size; i++){
    printf("%d. %d \n", i, list[i]);
  }
  printf("\n");
}

int main(void){

  insertBeginning(1);
  insert(2,1);
  insertEnd(3);
  insertEnd(4);
  insertEnd(5);
  insertEnd(6);

  show();

  removeBeginning();
  removeEnd();
  removePosition(2);

  show();
  return 0;
}
