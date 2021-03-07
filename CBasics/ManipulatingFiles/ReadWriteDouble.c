#include <stdio.h>
#include <stdlib.h>

void writeValues(int quant, char* filePath);
void readValues(int quant, char* filePath);

int main(){
  FILE *p;
  int quant;
  char filePath [100];

  printf("Insert the name of the file -> ");
  scanf("%s", filePath);
  printf("Insert how many values you will save on the file -> ");
  scanf("%d",&quant);

  writeValues(quant, filePath);
  readValues(quant, filePath);
  return 0;
}

void writeValues(int quant, char* filePath){
 FILE *f = fopen(filePath, "wb");
 if(f != NULL){
   float value;
   for(int i = 0; i < quant; i++){
     printf("Insert a value: ");
     scanf(" %f", &value);
     fwrite(&value, sizeof(float), 1, f);
   }
   fclose(f);
 }
 else{
    printf("Unable to open the file\n");
    exit(1);
 }
}

void readValues(int quant, char* filePath){
 FILE *f = fopen(filePath, "r");
 if(f != NULL){
   float value;
   for(int i = 0; i < quant; i++){
     fread(&value, sizeof(float), 1, f);
     printf("Value %i -> %f \n",i, value);
   }
   fclose(f);
 }
 else{
    printf("Unable to open the file\n");
    exit(1);
 }
}
