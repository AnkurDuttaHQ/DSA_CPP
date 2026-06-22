//print the largest of three numbers using function
#include<iostream>
using namespace std;

int largest(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}

int main (){
    int a,b,c;
    cout<<"Enter the a:";
    cin>>a;
    cout<<"Enter the b:";
    cin >> b;
    cout<<"Enter the c:";
    cin>>c;
    cout<<"The largest number is: "<<largest(a,b,c)<<endl;

    
}