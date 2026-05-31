#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    char ch;
    for (int i = 1; i <= n; i++) {
        ch = 'A';
        for (int j = 1; j <= i - 1; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}