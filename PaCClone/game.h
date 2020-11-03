void readmap();
void allocmap();
void printmap();
void readmap();
void move(char direction);
int gameover();

struct map{
  char** matrix;
  int lines;
  int collumns;
};

typedef struct map MAP;
