// print the function in the decresig order

#include <iostream>
using namespace std;

void printDecreasing(int n){
    if(n==0){
        return;
    }else{
        cout << n<<endl;
    }
    printDecreasing(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printDecreasing(n);
    return 0;
}