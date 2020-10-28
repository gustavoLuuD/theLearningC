#include <stdlib.h>
#include<stdio.h>
#define MAX_top 100

int stack[MAX_top];
int top = 0;
void push(int x){
  if(top > MAX_top){
    printf("stack overflow\n");
    exit(1);
  }
  stack[top] = x;
  printf("%d was pushed into the stack \n",x);
  top++;
}
int pop(){
  if(top == 0){
    printf("Empty stack\n");
    exit(1);
  }
  printf("%d was popped!\n",stack[top-1]);
  return stack[--top];
}
void show(){
  printf("Your stack\n");
  for(int i = top - 1; i >= 0; i--){
    printf("= %d = \n", stack[i]);
  }
  printf("=====\n");
  printf("\n");
}
int main() {
  push(1);
  push(2);
  push(3);
  push(4);
  show();
  pop();
  show();
  return 0;
}
