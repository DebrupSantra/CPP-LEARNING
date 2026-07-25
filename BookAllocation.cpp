class Solution {
public:
    bool isPossible(vector<int>& books, int students, int limit) {
        int count = 1;
        int pages = 0;
        for (int book : books) {
            if (pages + book <= limit) {
                pages += book;
            }
            else {
                count++;
                pages = book;
                if (count > students)
                    return false;
            }
        }
        return true;
    }
    int findPages(vector<int>& books, int students) {
        if (students > books.size())
            return -1;
        int low = *max_element(books.begin(), books.end());
        int high = accumulate(books.begin(), books.end(), 0);
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isPossible(books, students, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return ans;
    }
};