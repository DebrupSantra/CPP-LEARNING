#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int spaces = 0;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            spaces++;
        }
    }
    cout << "Number of spaces = " << spaces;
    return 0;
}