// Sum of N native numbers using recursion
#include <iostream>
using namespace std;

int sum(int n){
    if (n==0){
        return 0;
    } else{
        return n+sum(n-1); // n=5 , 5 => 4 => 3 
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sum(n);
    cout << "Sum of first " << n << " natural numbers is: " << result << endl;
    return 0;
}