// sum odd digits of a number using while loop
#include <iostream>
using namespace std;

int main (){
    int number , last_digit , sum=0;
    cout << "Enter a number:";
    cin >> number;

    while (number !=0){
        last_digit = number % 10;
        if (last_digit % 2 !=0){
            sum = sum + last_digit;
        }
        number = number / 10;
    }
    cout << "Sum of odd digits: " << sum << endl;
}