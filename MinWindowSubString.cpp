class Solution {
public:
    string minWindow(string s, string t) {

        vector<int> freq(128, 0);

        for (char c : t) {
            freq[c]++;
        }

        int left = 0;
        int right = 0;
        int count = 0;
        int start = 0;
        int minLen = INT_MAX;

        while (right < s.length()) {

            char c = s[right];

            if (freq[c] > 0) {
                count++;
            }

            freq[c]--;
            right++;

            while (count == t.length()) {

                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }

                freq[s[left]]++;

                if (freq[s[left]] > 0) {
                    count--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(start, minLen);
    }
};