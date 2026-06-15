#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v;
    int n, m;

    cout << "How many numbers to enter: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "Enter number: ";
        cin >> m;
        v.push_back(m);
    }

    int largest = v[0];

    for(int i = 0; i < v.size(); i++) {
        if(largest < v[i]) {
            largest = v[i];
        }
    }

    cout << "Largest number is: " << largest;

    return 0;
}