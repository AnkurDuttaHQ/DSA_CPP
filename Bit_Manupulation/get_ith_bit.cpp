// get ith bit from binary form of a num
#include<iostream>
using namespace std;

void get_ith_bit(int num,int bit){
    int bitmask = 1 << bit;
    if((num & bitmask)== 0){
        cout<<"i th bit is 0"<<endl;
    }else{
        cout<<"i th bit is 1"<<endl;
    }
}

int main (){
    int num,bit;
    cout<<"Enter the num :";
    cin >> num;

    cout<<"Enter the bit position :";

    cin >> bit;
    get_ith_bit(num,bit);
}