#include <stdio.h>
#include <string.h>

//defining the struct
struct student{
    char name[40];
    int number;
    float grade;
};

int main(void){
  struct student s;

  printf("What is the student's name? ");
  scanf(" %s", s.name);

  printf("What is the student's number? ");
  scanf(" %d", &s.number);

  printf("What is the student's grade? ");
  scanf(" %f", &s.grade);

  printf("\nThe student's name........: %s\n", s.name);
  printf("The student's number........: %d\n", s.number);
  printf("The student's grade........: %f\n", s.grade);
  return 0;
}
