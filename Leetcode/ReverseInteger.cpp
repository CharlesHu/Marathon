class Solution {
public:
    int reverse(int x) {
        long long t = x, ans = 0;
        if (t < 0) t = -t;
        for (; t != 0; t /= 10) ans = ans*10+t%10;
        if (x>0 && ans>0x7fffffff || x<0 && ans>0x80000000) return 0;
        return (int)((x>0)?ans:-ans);
    }
};