#include<iostream>
using namespace std;

int calculate_fact(int n){
    int fact_n = 1;
    for(int i=1;i<=n;i++){
        fact_n *= i;
    }
    return fact_n;
}

int bionomial_cofficient(int n,int r){
    if(r>n || r<0){
        cout<<"Invalid input. r should be between 0 and n."<<endl;
        return -1;
    }
    int fact_n = calculate_fact(n);
    int fact_r = calculate_fact(r);
    int fact_n_r = calculate_fact(n-r);
    
    return fact_n/(fact_r*fact_n_r);
}

int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    
    int result = bionomial_cofficient(n,r);
    if(result != -1){
        cout<<"Bionomial Coefficient C("<<n<<","<<r<<") is: "<<result<<endl;
    }
}