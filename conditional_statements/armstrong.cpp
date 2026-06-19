#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int number,count=0 ,sum=0 , originalNumber;
    cout << "Enter the number:"<<endl;
    cin >> number;
    originalNumber = number;

    // how many digits  are there in the number
    while(number !=0){
        number = number/10;
        count ++;
    }
    // take the number one by one and number to the power  digit
    number = originalNumber;
    while(number  !=0){
        int digit = number % 10;
        sum = sum + pow(digit ,count);
        number = number / 10;
    }
    // check the armstrong number or not
    if(sum == originalNumber){
        cout << originalNumber << " is an armstrong number"<<endl;
    } else {
        cout << originalNumber << " is not an armstrong number"<<endl;

    }
}