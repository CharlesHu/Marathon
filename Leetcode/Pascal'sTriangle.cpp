class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > ans;
        vector<int> v;
        for (int i = 0; i < numRows; ++i) {
            v.clear();
            for (long long j = 0, t = 1; j <= i; ++j, t = t*(i-j+1)/j) {
                v.push_back(t);
            }
            ans.push_back(v);
        }
        return ans;
    }
};