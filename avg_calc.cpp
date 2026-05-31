#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    double average = (a + b) / 2;

    cout << "Average = " << average << endl;

    return 0;
}