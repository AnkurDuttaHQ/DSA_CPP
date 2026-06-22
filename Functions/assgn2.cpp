// calculaate the sum of digit of a number 
#include<iostream>
using namespace std;

int sum_of_digit(int n){
    int sum =0;
    while(n>0){
        int digit = n% 10;
        sum+=digit;
        n/=10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int result = sum_of_digit(n);
    cout<<"The sum of digit of "<<n<<" is: "<<result<<endl;
}