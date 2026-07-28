#include<iostream>
#include<string>
using namespace std;

class  Student {
    public:
    string name;
    float cgpa;
    
    void getpercentage(){
        cout<<cgpa *10 << "\n";
    }
};

// gettrs ans setters 
class Studentclass {
    private:
        string name;
        float cgpa ;
    public:
        // setters
        void setdata(string val ,  float cgpa){
            name = val;
            cgpa = cgpa;
        }
        // gettrs
        float getcgpa(){
            return cgpa;
        }

        string getname(){
            return name;
        }

};

int main (){

    Studentclass s2;
    s2.setdata("Ankur Dutta",8.5);
    string name = s2.getname();
    float cgpa = s2.getcgpa();
    cout << name << endl;
    cout << cgpa << endl;
}