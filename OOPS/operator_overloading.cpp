#include<iostream>
#include<string>

using namespace std;

class Complex {
    int real;
    int img;
    public:
        Complex(int real,int img){ // iniatialize the obj with constructor
            this->real = real;
            this->img = img;
        }

        void shownum(){
            cout << real <<"+"<< ""<<img<<"i"<<endl;
        }
        // For + operator
        Complex operator + (Complex  &c2){ //c1 comes in the Complex object with refferance to the c2
            int real = this->real + c2.real;
            int img = this->img + c2.img;
            
            Complex c3(real,img); // add the real sum anf img sum to a new c3 obj
            return c3;

        }

        // for - operator

        Complex operator - (Complex  &c2){ //c1 comes in the Complex object with refferance to the c2
            int real = this->real - c2.real;
            int img = this->img - c2.img;
            
            Complex c3(real,img); // add the real sum anf img sum to a new c3 obj
            return c3;

        }
        // for * operator
        Complex operator * (Complex  &c2){ //c1 comes in the Complex object with refferance to the c2
            int real = this->real * c2.real;
            int img = this->img * c2.img;
            
            Complex c3(real,img); // add the real sum anf img sum to a new c3 obj
            return c3;

        }
        // for / operator
        Complex operator / (Complex  &c2){ //c1 comes in the Complex object with refferance to the c2
            int real = this->real / c2.real;
            int img = this->img / c2.img;
            
            Complex c3(real,img); // add the real sum anf img sum to a new c3 obj
            return c3;

        }

};

int main (){
    Complex c1(10,2);
    Complex c2(3,4);
    Complex c3 = c1 -c2;
    c3.shownum();
}