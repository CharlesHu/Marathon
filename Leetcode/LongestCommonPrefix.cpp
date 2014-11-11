class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.size() == 0) return "";
        string ans = strs[0];
        for (int i = 0; i < strs.size(); ++i) {
            int pos = -1;
            for (int j = 0; j < ans.size() && j < strs[i].size(); ++j) {
                if (ans[j] == strs[i][j]) pos = j;
                else break;
            }
            ans.erase(ans.begin()+pos+1, ans.end());
        }
        return ans;
    }
};