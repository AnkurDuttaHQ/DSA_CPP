#include<iostream>
#include<string>
using namespace std;

int findSubstring(string str, int i , int j , int n){
    // base case 
    if(n==0){
        return 1;
    }

    if(n< 0){
        return 0;
    }

    int res = findSubstring(str,i+1,j,n-1) +
              findSubstring(str, i , j-1,n-1);

    if(str[i] == str[j]){
        res ++ ; // if the first and last char are same the res will be ++;
    }

    return res;

}

int main (){
    string str = "abcab";
    int n = str.size();
    int count = findSubstring(str ,0 ,n-1,n);
    cout << count << endl;
}