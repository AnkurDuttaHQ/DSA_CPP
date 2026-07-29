#include<iostream>
#include<string>

using namespace std;

class User {
    private:
        string id;
        string password;
    public:
        string username;

        User(string id , string password , string username){
            cout<<"parameterized constructor"<<endl;
            this -> id = id;
            this -> password = password;
            this -> username = username;

        }

        string getPass(){
            return this->password;
        }

        void setPass(string newPass){
            cout<<"Old password is :"<<this->password;
            this -> password = newPass;
            cout<<"New password is :"<<this->password;
        }


};

int main (){
    User user1("10","AnkurDutta1436","ankurdev");
    string pass = user1.getPass();
    cout<<pass<<endl;
    string newPass;
    cout<<"Set your new password"<<endl;
    cout<<"Enter your new password:"<<endl;
    cin >> newPass;
    user1.setPass(newPass);
}