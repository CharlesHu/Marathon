class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for (long long i = 0, j = 1; i <= rowIndex; ++i, j = j*(rowIndex-i+1)/i) ans.push_back(j);
        return ans;
    }
};