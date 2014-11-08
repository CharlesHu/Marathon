class Solution {
public:
    string countAndSay(int n) {
        string ans = "1", t = "1";
        for (int i = 2; i <= n; ++i) {
            ans = "";
            for (int j = 0; j < t.size(); ) {
                char c = t[j];
                int num = 0;
                while (j < t.size() && t[j] == c) { ++num; ++j; }
                ans = ans + to_string(num) + c;
            }
            t = ans;
        }
        return ans;
    }
};