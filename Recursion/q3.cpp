#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string str , string ans , int i , bool map[26]){

    if(i==str.size()){
        cout << "ans :"<<ans;
        return;
    }
    char ch = str[i];
    int map_idx = (int)(ch - 'a');

    if(map[map_idx]){
        removeDuplicates(str , ans , i+1 , map);
    } else{
        map[map_idx] = true;
        removeDuplicates(str , ans+str[i] ,i+1,map);
    }
}

int main (){
    string str = "appnnacollege";
    bool map[26] = {false};
    string ans = "";
    removeDuplicates(str , ans , 0 , map);
}