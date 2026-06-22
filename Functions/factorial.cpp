#include<iostream>
using namespace std;
int fact(int n){
    if(n<0){
        cout<<"Factorial is not defined for negative numbers."<<endl;
    
    }
    else if(n==0 || n==1){
        return 0;
    }
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n ,val;
    cout<<"Enter a number: ";
    cin>>n;
    val = fact(n);
    cout<<"Factorial of "<<n<<" is: "<<val<<endl;
}