#include <iostream>
#include <vector>
using namespace std;

// Example 4
void logRecursion(int n) {
    if (n <= 1)
        return;
    logRecursion(n / 2);
}

// Example 5
void linearRecursion(int n) {
    if (n == 0)
        return;
    linearRecursion(n - 1);
}

// Example 9
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    // =====================================================
    // Example 1 : O(1) Space
    // =====================================================
    /*
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
        sum += i;

    cout << sum;
    */

    // =====================================================
    // Example 2 : O(n) Space
    // =====================================================
    /*
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        arr[i] = i;
    */

    // =====================================================
    // Example 3 : O(n²) Space
    // =====================================================
    /*
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    */

    // =====================================================
    // Example 4 : O(log n) Space (Recursion)
    // =====================================================
    /*
    int n;
    cin >> n;

    logRecursion(n);
    */

    // =====================================================
    // Example 5 : O(n) Space (Recursion)
    // =====================================================
    /*
    int n;
    cin >> n;

    linearRecursion(n);
    */

    // =====================================================
    // Example 6 : O(1) Extra Space
    // =====================================================
    /*
    vector<int> arr = {3, 5, 1, 9, 2};

    int maximum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maximum)
            maximum = arr[i];
    }

    cout << maximum;
    */

    // =====================================================
    // Example 7 : O(n) Space
    // =====================================================
    /*
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
        v.push_back(i);
    */

    // =====================================================
    // Example 8 : O(n²) Space
    // =====================================================
    /*
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    */

    // =====================================================
    // Example 9 : O(n) Space
    // (Time = O(2^n), Space = O(n))
    // =====================================================
    /*
    int n;
    cin >> n;

    cout << fibonacci(n);
    */

    // =====================================================
    // Example 10 : O(1) Space
    // =====================================================
    /*
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << i << " ";

    cout << endl;

    for (int i = 0; i < n; i++)
        cout << i << " ";
    */

    return 0;
}