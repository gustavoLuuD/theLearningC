#include <iostream>
using namespace std;

int main(){
   //the posfix operator evaluates the expression and then increments

    int x = 5;

    cout <<"x-> "<<  x << endl;
    int a = x++;
    cout <<"a-> "<< a << endl;
    cout <<"x-> "<<  x << endl;

    int y = 5;
    //the prefix operator increments and then evaluates the expression
    cout <<"y-> "<<  y << endl;
    int b = ++y;
    cout <<"b-> "<<  b << endl;
    cout <<"y-> "<<  y << endl;

    a = 3;
    b = 2;
    b = a++;
    cout << b << endl;
    cout << ++b;
  return 0;
}
