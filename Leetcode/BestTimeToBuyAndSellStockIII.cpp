class Solution {
public:
    int maxProfit(vector<int> &prices) {
        vector<int> v(prices.size(), 0);
        int b = INT_MIN, sum = 0;
        for (int i = prices.size()-1; i >= 0; --i) {
            b = max(b, prices[i]);
            sum = max(sum, b - prices[i]);
            v[i] = sum;
        }
        int a = INT_MAX, ans = 0;
        sum = 0;
        for (int i = 0; i < prices.size(); ++i) {
            a = min(a, prices[i]);
            sum = max(sum, prices[i] - a);
            if (i == 0) ans = max(ans, v[0]);
            if (i+1 < prices.size()) ans = max(ans, sum + v[i+1]);
            else ans = max(ans, sum);
        }
        return ans;
    }
};