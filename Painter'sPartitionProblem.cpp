#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int>& boards, int painters, int maxTime) {
    int painterCount = 1;
    int currentSum = 0;
    for (int length : boards) {
        if (currentSum + length <= maxTime) {
            currentSum += length;
        } else {
            painterCount++;
            currentSum = length;
            if (painterCount > painters)
                return false;
        }
    }
    return true;
}
int painterPartition(vector<int>& boards, int painters) {

    int low = *max_element(boards.begin(), boards.end());

    int high = 0;
    for (int x : boards)
        high += x;

    int ans = high;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (isPossible(boards, painters, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> boards = {10,20,30,40};
    int painters = 2;

    cout << painterPartition(boards, painters);

    return 0;
}