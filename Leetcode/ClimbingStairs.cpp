class Solution {
public:
    int climbStairs(int n) {
        if (n <= 1) return 1;
        int s = 1, f = 1;
        for (int i = 2; i <= n; ++i) {
            int t = s+f;
            s = f;
            f = t;
        }
        return f;
    }
};