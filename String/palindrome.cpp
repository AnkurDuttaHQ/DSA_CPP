// check palindrome for word
#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char arr[] , int n){
    int st = 0 , end = n-1;
    while(st<=end){
        if(arr[st++]!=arr[end--]){
            return false;
        } else{
            return true;
        }
    }

}

int main (){
    char word[20];
    cout<<"Enter your word to check valid palindrome or not :";
    cin >> word;
    bool validation_palindrome;
    validation_palindrome = isPalindrome(word,strlen(word));
    if(validation_palindrome){
        cout<<"The word is palindrome"<<endl;

    } else{
        cout<< "The word is not palindrome";
    }
}