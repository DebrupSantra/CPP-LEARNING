#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n, t;
    std::cin >> n >> t;
    std::string s;
    std::cin >> s;
     for (int second = 0; second < t; ++second) {
        for (int i = 0; i < n - 1; ++i) {
             if (s[i] == 'B' && s[i + 1] == 'G') {
                std::swap(s[i], s[i + 1]);
                 ++i; 
            }
        }
    }
 
    std::cout << s << "\n";
    return 0;
}