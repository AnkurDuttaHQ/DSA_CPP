#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1 , string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    else{
        int count[26] = {0}; // track every char count
        // track first string
        for(int i =0;i<str1.length();i++){
            int idx = str1.at(i) - 'a';
            count[idx]++;
        }

        // track second string

        for(int i=0;i<str2.length();i++){
            int idx = str2.at(i) -'a';
            if(count[idx]==0){ // check if this idx val exists in the first string if not => not anagram
                return false;
            }else{
                count[idx]--;
            }
        }

    }

    return true;
}


int main (){
    string str1 = "anagram";
    string str2 = "nagaram";
    bool valid_anagram = isAnagram(str1,str2);

    if(valid_anagram){
        cout<< "Two strings are anagram";
    }else{
        cout<<"Two strings are not anagrams";
    }
}