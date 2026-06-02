#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int c=1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i; j++) {
            cout << c <<" ";
            c=c+1;
        }
        cout << endl;
    }
    return 0;
}