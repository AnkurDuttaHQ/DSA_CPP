// check palindrome for word
#include<iostream>
#include<cstring>
using namespace std;

void palindrome(char arr[] , int n){
    char original[20];
    for(int i=0;i<n ;i++){
        original[i] = arr[i];
    }
    // reverse the string
    int st=0 , end = n-1;
    while(st<end){
        swap(arr[st++],arr[end--]);
    }

    // check palindrome
    bool truePalinfrome = 0;
    bool falsePalindrome =0;
    for(int i=0 ;i<n;i++){
        if(original[i]==arr[i]){
            truePalinfrome++;
        } else{
            falsePalindrome++;
        }
    }

    // check validity

    if(!truePalinfrome){
        cout<<"The word is not palindrome word";
    } else{
        cout<<"The word is palindrome word";
    }
}

int main (){
    char word[20];
    cout<<"Enter your word to check valid palindrome or not :";
    cin >> word;
    palindrome(word , strlen(word));
}