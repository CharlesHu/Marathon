class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int len = strlen(s), l = -1, r = len-1;
        for (; r >= 0 && s[r] == ' '; --r) {}
        l = r;
        for (; l >= 0 && s[l] != ' '; --l) {}
        return r-l;
    }
};