class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long t = x, re = 0;
        while (x) {
            re = re*10 + x%10;
            x /= 10;
        }
        return t == re;
    }
};