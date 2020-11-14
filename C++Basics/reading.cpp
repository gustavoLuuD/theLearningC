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

    return 0;
}
