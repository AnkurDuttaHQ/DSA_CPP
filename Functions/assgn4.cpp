//Writeafunctionthatacceptsacharacter(ch)asparameters&returnsthecharacterthatoccursafterchintheEnglishalphabet.
#include <iostream>
using namespace std;

char next_character(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return (ch == 'z') ? 'a' : ch + 1; // Wrap around to 'a' after 'z'
    } else if (ch >= 'A' && ch <= 'Z') {
        return (ch == 'Z') ? 'A' : ch + 1; // Wrap around to 'A' after 'Z'
    } else {
        cout << "Invalid input. Please enter an alphabet character." << endl;
        return '\0'; // Return null character for invalid input
    }
}

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    char result = next_character(ch);
    if (result != '\0') {
        cout << "The next character after '" << ch << "' is: '" << result << "'" << endl;
    }

    return 0;
}