#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, num;

    cout << "How many numbers to enter: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cout << "Enter number: ";
        cin >> x;
        v.push_back(x);
    }

    cout << "Enter number whose frequency you want to find: ";
    cin >> num;

    int count = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] == num) {
            count++;
        }
    }

    cout << "Frequency of " << num << " is: " << count;

    return 0;
}