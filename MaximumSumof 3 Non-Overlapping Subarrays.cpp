class Solution {
public:
    int solve(int index, int count, vector<int>& nums, vector<int>& prefix,
              int& k, vector<vector<int>>& dp) {
        if (index >= nums.size() || count == 0)
            return 0;

        if (dp[index][count] != -1)
            return dp[index][count];

        int skip = solve(index + 1, count, nums, prefix, k, dp);
        int take = 0;
        if (index + k - 1 < nums.size()) {
            take = prefix[index + k - 1] - (index > 0 ? prefix[index - 1] : 0) +
                   solve(index + k, count - 1, nums, prefix, k, dp);
        }
        return dp[index][count] = max(skip, take);
    }

public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefix(n);
        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] += prefix[i - 1] + nums[i];
        }

        vector<vector<int>> dp(n + k, vector<int>(4, -1));
        int maxSum = solve(0, 3, nums, prefix, k, dp);

        vector<int> result;

        int index = 0;
        int count = 3;

        while (count > 0) {
            int skip = solve(index + 1, count, nums, prefix, k, dp);

            int take = 0;
            if (index + k - 1 < n) {
                int sum =
                    prefix[index + k - 1] - (index ? prefix[index - 1] : 0);
                take = sum + solve(index + k, count - 1, nums, prefix, k, dp);
            }

            if (take >= skip) {
                result.push_back(index);
                index += k;
                count--;
            } else {
                index++;
            }
        }
        return result;
    }
};