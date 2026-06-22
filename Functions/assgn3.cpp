#include<iostream>
#include<cmath>
using namespace std;

int calculate(int a ,int b){
    return pow(a,2) + pow(b,2) + 2*a*b;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    int result = calculate(a,b);
    cout<<"The result of the calculation is: "<<result<<endl;
}
