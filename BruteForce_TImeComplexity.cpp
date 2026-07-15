#include <iostream>
using namespace std;
long long sumOfMultiples(long long n, long long x) {
    long long k = (n - 1) / x;
    return x * k * (k + 1) / 2;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << sumOfMultiples(n, 3)
             + sumOfMultiples(n, 5)
             - sumOfMultiples(n, 15)
             << endl;
    }
    return 0;
}