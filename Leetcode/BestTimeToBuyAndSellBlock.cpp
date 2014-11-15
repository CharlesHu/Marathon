class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int a = INT_MAX, ans = 0;
        for (int i = 0; i < prices.size(); ++i) {
            a = min(a, prices[i]);
            ans = max(ans, prices[i]-a);
        }
        return ans;
    }
};