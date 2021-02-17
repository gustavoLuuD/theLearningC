#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int seconds =  time(0);
    srand(seconds);//we pass a different seed everytime the program runs

    int random = rand();
    printf("this is a random number %i\n", random);
    int smaller = random % 100;
    printf("This is a smaller random number %i\n", smaller);
    return 0;
}
