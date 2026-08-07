#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeArrays(vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }

    // Remaining elements of a
    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }

    // Remaining elements of b
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};

    vector<int> result = mergeArrays(a, b);

    for (int x : result)
        cout << x << " ";

    return 0;
}