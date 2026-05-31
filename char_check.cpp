#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an Uppercase letter.";
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a Lowercase letter.";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Digit.";
    }
    else {
        cout << ch << " is a Special character.";
    }

    return 0;
}