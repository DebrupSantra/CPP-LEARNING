#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Number of characters = " << s.length();
    return 0;
}