#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Enter marks: ";
        cin >> marks[i];

        sum += marks[i];
    }

    double average = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}