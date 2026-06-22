// check palindrome or not
#include<iostream>
using namespace std;

bool palindrome(int n){
    int original_n = n;
    int reverse = 0;

    while(n>0){
        int digit = n%10;
        reverse = reverse*10 +digit;
        n/=10;
    }

    return original_n == reverse;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(palindrome(n)){
        cout<<"The number is a palindrome."<<endl;
    }
    else{
        cout<<"The number is not a palindrome."<<endl;
    }
}
