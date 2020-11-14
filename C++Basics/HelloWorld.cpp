#include <iostream>
using namespace std;
void jumpline(int number){
  for(int i  = 0; i < number; i++){
    printf("\n");
  }
}
int main()
{
  cout << "Hello World " << endl;
  printf("It's c++ b@tcH");     //we can also use printf

  jumpline(7);

  for (int i = 0; i <= 100; i++){
    cout << "Hell" << "Yes" << i  << endl;
  }
  return 0;
}
