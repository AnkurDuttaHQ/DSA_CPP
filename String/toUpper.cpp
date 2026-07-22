// convert all lowercase character to uppercase character
#include<iostream>
#include<cstring>
using namespace std;

void toUpper(char arr[],int n){
    for(int i=0;i<n;i++){
        char ch = arr[i];
        if(ch >'A' && ch < 'Z'){
            continue; // this is upeercase character 
        } else{
            arr[i]= ch - 'a' + 'A';
        }
    }
    cout << arr << endl;
}
// convert all uppercase character to lowercase character

void toLower(char arr[] , int n){
    for(int i=0;i<n;i++){
        char ch = arr[i];
        if(ch >'a' && ch < 'z'){
            continue; // this is lowercase character 
        } else{
            arr[i]= ch - 'A' + 'a';
        }
    }
    cout << arr << endl;
}

int main(){
    char upper_word[30];
    char lower_word[30];
    cout << "Enter your string to convert into uppercase : ";
    cin >> upper_word;
    cout << "Enter your string to convert into lowercase : ";
    cin >> lower_word;
    toUpper(upper_word , strlen(upper_word));
    toLower(lower_word , strlen(lower_word));
}