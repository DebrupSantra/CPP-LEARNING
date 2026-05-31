#include <iostream>
using namespace std;
int main() {
    int choice, num;
    cout << "===== NUMBER TOOLKIT =====\n";
    cout << "1. Check Even/Odd\n";
    cout << "2. Check Positive/Negative\n";
    cout << "3. Find Factorial\n";
    cout << "4. Multiplication Table\n";
    cout << "5. Exit\n";
    cout << "\nEnter your choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter a number: ";
        cin >> num;
        if (num % 2 == 0)
            cout << num << " is Even";
        else
            cout << num << " is Odd";
    }
    else if (choice == 2) {
        cout << "Enter a number: ";
        cin >> num;
        if (num > 0)
            cout << num << " is Positive";
        else if (num < 0)
            cout << num << " is Negative";
        else
            cout << "The number is Zero";
    }
    else if (choice == 3) {
        cout << "Enter a number: ";
        cin >> num;
        long long fact = 1;
        if (num < 0) {
            cout << "Factorial not defined for negative numbers";
        } else {
            for (int i = 1; i <= num; i++) {
                fact *= i;
            }
            cout << "Factorial of " << num << " = " << fact;
        }
    }
    else if (choice == 4) {
        cout << "Enter a number: ";
        cin >> num;
        for (int i = 1; i <= 10; i++) {
            cout << num << " x " << i << " = " << num * i << endl;
        }
    }
    else if (choice == 5) {
        cout << "Exiting program...";
    }
    else {
        cout << "Invalid choice!";
    }
    return 0;
}