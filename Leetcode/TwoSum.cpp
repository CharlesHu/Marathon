class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < numbers.size(); ++i) m[numbers[i]] = i+1;
        for (int i = 0; i < numbers.size(); ++i) {
            if (m[target-numbers[i]] > 0 && m[target-numbers[i]] != i+1) {
                ans.push_back(min(i+1, m[target-numbers[i]]));
                ans.push_back(max(i+1, m[target-numbers[i]]));
                return ans;
            }
        }
    }
};