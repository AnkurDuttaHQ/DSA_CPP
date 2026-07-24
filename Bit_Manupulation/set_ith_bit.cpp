// set ith bit from binary form of a num
#include<iostream>
using namespace std;

int get_ith_bit(int num,int bit){
    int bitmask = 1 << bit;
    return num | bitmask ; // convrt ith position to 1 (1 => 1, 0=> 1)
}

int main (){
    int num,bit;
    cout<<"Enter the num :";
    cin >> num;

    cout<<"Enter the bit position :";

    cin >> bit;
    int num_ret = get_ith_bit(num,bit);
    cout<<num_ret;
}