#include<iostream>
using namespace std;
int main() {
    // Tax calculation of the user based on the income
    cout << "Enter your income:" << endl;
    int income;
    cin >> income;

    if (income < 500000){
        cout << "You are not eligible to pay tax"<<endl;
    } else if (income >=500000 && income<1000000){
        income = income -(income*0.2);
        cout << "your current balance after tax deduction is :"<<income<<endl;

    } else{
        income = income -(income*0.3);
        cout << "your current balance after tax deduction is :"<<income<<endl;
    }
    return 0;
}
