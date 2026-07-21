#include <iostream>
using namespace std;
int main() {
    int arr[] = {2,5,8,12,16,23,38,56,72};
    int n = 9;
    int target = 23;
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == target)
        {
            cout << "Found at index " << mid;
            return 0;
        }
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "Not Found";
}