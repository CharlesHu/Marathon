class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        sort(S.begin(), S.end());
        vector<vector<int> > ans;
        vector<int> vec;
        ans.push_back(vec);
        for (int i = 0; i < S.size(); ++i) {
            int len = ans.size();
            for (int j = 0; j < len; ++j) {
                vec = ans[j];
                vec.push_back(S[i]);
                ans.push_back(vec);
            }
        }
        return ans;
    }
};