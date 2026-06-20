// calculate sum of the digits of a number using while loop
#include <iostream>
using namespace std;

int main (){
    int number , sum =0 ,last_digit;
    cout << "Enter a number: ";
    cin >> number;

    while (number !=0){
        last_digit = number % 10;
        sum = sum + last_digit;
        number = number / 10;
    }
    cout << "Sum of the digits: " << sum << endl;
}