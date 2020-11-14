#include<iostream>

using namespace std;
int main(){
    int number;
    int square;

    cout << "write a number ->";
    cin >> number;
    square = number * number;

    cout << "this is your number: "<< number << endl;
    cout << "this is the square of your number :" << square << endl;
    cout << "thisis your number divided by 2 :" << number / 2 << endl;

    if(number % 2 == 0)
      cout << "Your number is even" << endl;
    else
    cout << "Your number is odd" << endl;


    
    return 0;
}
