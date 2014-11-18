class Solution {
public:
    map<char, string> mapping;
    
    void rec(vector<string> &ans, string digits, string t, int pos) {
        if (pos == digits.size()) {
            ans.push_back(t);
            return ;
        }
        string m = mapping[digits[pos]];
        for (int i = 0; i < m.size(); ++i) {
            rec(ans, digits, t+m[i], pos+1);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        mapping['2'] = "abc";
        mapping['3'] = "def";
        mapping['4'] = "ghi";
        mapping['5'] = "jkl";
        mapping['6'] = "mno";
        mapping['7'] = "pqrs";
        mapping['8'] = "tuv";
        mapping['9'] = "wxyz";
        vector<string> ans;
        rec(ans, digits, "", 0);
        return ans;
    }
};