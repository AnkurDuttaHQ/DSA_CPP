#include<iostream>
using namespace std;

int main (){

    int  operation;
    cout << "Enter the operation you want to perform: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> operation;

    switch(operation){
        case 1:
            int a ,b ;
            cout << "Enter the two numbers you want to add:"<<endl;
            cin >> a >>b;
            cout << "The sum of the two numbers is: " << a+b << endl;
            break; 
        case 2 :
            int c ,d ;
            cout << "Enter the two numbers you want to subtract:"<<endl;
            cin >> c >>d;
            cout << "The difference of the two numbers is: " << c-d << endl;
            break;
        case 3 :
            int e , f;
            cout << "Enter the two numbers you want to add:"<<endl;
            cin >> e >>f;
            cout << "The product of the two numbers is: " << e*f << endl;
            break;
        case 4 :
            int g , h;
            cout << "Enter the two numbers you want to divide:"<<endl;
            cin >> g >>h;
            if (h==0){
                cout << "Division by zero is not allowed." << endl;
            } else {
                cout << "The quotient of the two numbers is: " << g/h << endl;
            }
            break;

    }
}