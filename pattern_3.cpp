#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int c=0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 3; j++) {
            c=c+1;
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}