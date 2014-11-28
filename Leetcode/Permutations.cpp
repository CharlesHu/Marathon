class Solution {
public:
    void permute(vector<vector<int> > &ans, vector<int> &num, int pos) {
        if (pos >= num.size()) {
            ans.push_back(num);
        } else {
            for (int i = pos; i < num.size(); ++i) {
                swap(num[i], num[pos]);
                permute(ans, num, pos+1);
                swap(num[i], num[pos]);
            }
        }
    }
    
    vector<vector<int> > permute(vector<int> &num) {
        vector<vector<int> > ans;
        vector<int> v;
        permute(ans, num, 0);
        return ans;
    }
};