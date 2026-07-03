#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s, clean = "";
    getline(cin, s);

    // Keep only letters and digits, convert to lowercase
    for (char ch : s) {
        if (isalnum(ch))
            clean += tolower(ch);
    }

    bool palindrome = true;

    for (int i = 0; i < clean.length() / 2; i++) {
        if (clean[i] != clean[clean.length() - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "Valid Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}