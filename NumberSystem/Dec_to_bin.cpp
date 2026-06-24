#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int sum = 0, n, powerofTen = 0;

    cout << "Enter the Decimal number: ";
    cin >> n;

    while(n > 0){
        int remainder = n % 2;

        cout << "n = " << n
             << " remainder = " << remainder
             << " sum = " << sum << endl;

        sum = sum + pow(10, powerofTen) * remainder;
        n /= 2;
        powerofTen++;
    }

    cout << "The Binary value is : " << sum << endl;
}