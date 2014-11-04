class Solution {
public:
    bool isPalindrome(string s) {
        int len = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9') {
                if (s[i] >= 'A' && s[i] <= 'Z') s[len++] = s[i]-'A'+'a';
                else s[len++] = s[i];
            }
        }
        s.erase(s.begin()+len, s.end());
        for (int i = 0; i < len/2; ++i) {
            if (s[i] != s[len-i-1]) return false;
        }
        return true;
    }
};