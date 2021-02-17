struct map{
  char** matrix;
  int lines;
  int collumns;
};

typedef struct map MAP;

void allocmap(MAP* m);
void readmap(MAP* m);
void freemap(MAP* m);
void printmap(MAP* m);
