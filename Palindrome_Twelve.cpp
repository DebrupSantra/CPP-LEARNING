#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
using i128 = __int128_t;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    long long pal[12] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 22, 11
    };
    while (T--) {
        long long n;
        cin >> n;
        if (n == 10) {
            cout << -1 << '\n';
            continue;
        }
        long long a = pal[n % 12];
        cout << a << " " << (n - a) << '\n';
    }
    return 0;
}