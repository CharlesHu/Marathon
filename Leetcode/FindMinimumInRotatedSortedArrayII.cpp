class Solution {
public:
    int findMin(vector<int> &num) {
        int ans = INT_MAX;
        for (int i = 0; i < num.size(); ++i) ans = min(ans, num[i]);
        return ans;
    }
};