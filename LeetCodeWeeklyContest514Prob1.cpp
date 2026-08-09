class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        int n = min(prices.size(), discounts.size());

        double total = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (i < n) {
                total += (double)prices[i] * (100 - discounts[i]) / 100.0;
            } else {
                total += prices[i];
            }
        }

        return total;
    }
};