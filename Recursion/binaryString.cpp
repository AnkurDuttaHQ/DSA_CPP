#include <iostream>
#include <string>
using namespace std;

void binaryString(int n, int lastvar, string str) {

    if(n == 0) {
        cout << str << endl;
        return;
    }

    if(lastvar == 0) {
        binaryString(n - 1, 0, str + '0');
        binaryString(n - 1, 1, str + '1');
    } 
    else {
        binaryString(n - 1, 0, str + '0');
    }
}

int main() {
    string str = "";
    binaryString(3, 0, str);

    return 0;
}