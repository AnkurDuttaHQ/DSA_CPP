// Check wheather the user input is positive negat ive or zero

#include<iostream>
using namespace std;

int main (){
    int number;
    cout << "Enter the number you want to check:"<<endl;
    cin >> number;

    if (number < 0){
        cout << "The number is a negative number"<<endl;

    } else if (number > 0){
        cout << "The number is a positive number"<<endl;

    } else {
        cout << "The number is zero"<<endl;
    }
}