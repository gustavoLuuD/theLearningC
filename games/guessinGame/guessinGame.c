#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  printf("**********************************\n");
  printf("*  Welcome to the guessing game! *\n");
  printf("**********************************\n");

  int seconds = time(0);
  srand(seconds);
  int random = rand();
  int secretNumber = random % 100;
  int score = 1000;
  int guess;
  int numberOfAttempts = 5;
  int gotIt = 1;
  int level;
  printf("\tChoose the difficulty level\n");
  printf("(1)easy  (2)normal  (3)hard  (4)genius");
  scanf("%d", &level);
  switch (level) {
    case 1:{
      numberOfAttempts = 20;
      printf("=========Easy mode========\n");
      break;
    }
    case 2:{
      printf("=========Normal mode========\n");
      numberOfAttempts = 10;
      break;
    }
    case 3:{
      printf("=========Hard mode========\n");
      numberOfAttempts = 5;
      break;
    }
    case 4: {
      numberOfAttempts = 2;
      printf("\t=====Genius mode====\n");
      break;
    }
    case 999: {
      numberOfAttempts = 1;
      printf("   ,--.  \n");
      printf("   ,--.  \n");
      printf("  ([ oo]  \n");
      printf("   `- ^\\ \n");
      printf("_  I`-' \n");
      printf(",o(`-V' \n");
      printf("|( `-H-'  \t=====<Hacker Mode/>====\n");
      printf("|(`--A-'  \n");
      printf("|(`-/_\\' \n");
      printf(" O `'I ``\\  \n");
      printf("(\\  I    |\\,  \n");
      printf("\\\\-T-`,    |H    \n");
      break;
    }
    default:{
      printf("ERROOR\n");
    }
  }
  do{
    printf("Attempts left: %d\n", numberOfAttempts);
    printf("What is your guess? ");
    scanf("%d", &guess);
    gotIt = (guess == secretNumber);

    if(gotIt){
      printf("You are goddam right ;)\n\n");
    }
    else if(guess > secretNumber){
      printf("\n\nThe secret number is lower\n\n");
    }
    else {
      printf("                                 __ \n");
      printf("                     _ ,___,-'\",-=-.  \n");
printf("           __,-- _ _,-'_)_  (""`'-._\\ `.  \n");
printf("        _,'  __ |,' ,-' __)  ,-     /. |  \n");
printf("      ,'_,--'   |     -'  _)/         `\\  \n");
printf("    ,','      ,'       ,-'_,`           : \n");
printf("    ,'     ,-'       ,(,-(              : \n");
printf("         ,'       ,-' ,    _            ; \n");
printf("        /        ,-._/`---'            /  \n");
printf("       /        (____)(----. )       ,' \n");
printf("      /         (      `.__,     /\\ /,  \n");
printf("     :           ;-.___         /__\\/|  \n");
printf("     |         ,'      `--.      -,\\ |  \n");
printf("     :        /            \\    .__/  \n");
printf("      \\      (__            \\    |_ \n");
printf("       \\       ,`-, *       /   _|,\\  \n");
printf("        \\    ,'   `-.     ,'_,-'    \\ \n");
printf("       (_\\,-'    ,'\\\")--,'-'       __\\  \n");
printf("        \\       /  // ,'|      ,--'  `-.  \n");
printf("         `-.    `-/ \\'  |   _,'     /    `.  \n");
printf("            `-._ /      `--'/             \\  \n");
printf("    -D'OH!-      ,'           |              \\  \n");
printf("              /             |               \\  \n");
printf("           ,-'              |               / \n");
printf("          /                 |             -'  \n");


      printf("\n\nThe secret number is higher\n\n");
    }
    int lostscore = (guess - secretNumber) / 2;
    score -= lostscore;
    numberOfAttempts--;
  }while (!gotIt && numberOfAttempts > 0);

  if(gotIt == 1){
    printf("YOU WIN\n");
    printf("score: %d\n", score);
  } else{
    printf("YOU LOSE\n");
    printf("The secret number was %i\n",secretNumber);
  }
  return 0;
}
