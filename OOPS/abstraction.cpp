#include<iostream>
#include<string>

using namespace std;

class Shape {
    public:
        virtual void draw() = 0;
         // pure virtual function , abstract fnx;
};

class Circle : public Shape {
    public:
    void draw (){
        cout << "Draw circle"<<endl;

    }
};

class Square : public Shape{
    public:
    void draw (){
        cout<<"Draw square"<<endl;
    }
};

int main (){
    Circle c1;
    c1.draw();
    Square s1;
    s1.draw();
}