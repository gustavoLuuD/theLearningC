#include<stdlib.h>
#include<stdio.h>

#define MAXSIZE 15
int queue[MAXSIZE + 1];
int first, last;

void start(){
  first = last = 0;
}

void insert(int x){
  if((last + 1) % MAXSIZE == first){
    exit(1);
  }
  queue[last] = x;
  last = (last + 1) % MAXSIZE;
}

int removeelement(){
  if(first == last){
    exit(1);
  }
  int removed = queue[first];
  first = (first + 1) % MAXSIZE;
  return removed;
}
void printqueue(){
  int i = first;
  int counter = 0;
  while(i!= last){
    printf("%d -%d,\n",counter, queue[i]);
    counter++;
    i = ((i + 1) % MAXSIZE);
  }
}
int main(void){
  insert(4);
  insert(5);
  insert(6);
  int removed = removeelement();
  printf("%d was removed\n", removed);
  printqueue();
  return 0;
}
