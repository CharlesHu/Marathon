class Solution {
public:
    int maxProfit(vector<int> &prices) {
        bool hold = false;
        int a, b, sum = 0;
        for (int i = 0; i < prices.size(); ++i) {
            if (!hold && i+1 < prices.size() && prices[i] <= prices[i+1]) {
                a = prices[i];
                hold = true;
            } else if (hold && i+1 < prices.size() && prices[i] > prices[i+1]) {
                sum += prices[i] - a;
                hold = false;
            } else if (i == prices.size()-1 && hold) {
                sum += prices[i] - a;
                hold = false;
            }
        }
        return sum;
    }
};