#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int start = 0;

    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            for (int j = i - 1; j >= start; j--) {
                cout << s[j];
            }
            
            if (s[i] == ' ')
                cout << " ";

            start = i + 1;
        }
    }

    return 0;
}