#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "Enter the String: ";
    cin >> s;
    if (s.length()<=10){
        cout << s;
    }
    else{
        cout << s[0] << s.length()-2 << s[s.length()-1];
    }
    return 0;
}