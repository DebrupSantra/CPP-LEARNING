#include <iostream>
using namespace std;
int main() {
    int num, row;
    cout << "Enter the number till which you want the pyramid to go: ";
    cin >> num;
    cout << "Enter the number of rows: ";
    cin >> row;
    for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
    return 0;
}