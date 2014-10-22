class Solution {
public:
    int singleNumber(int A[], int n) {
        int b[32] = {0};
        for (int i = 0; i < n; ++i) {
            for (int j = 0; A[i] && j < 32; ++j) {
                b[j] += (A[i]>>j) & 1;
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; ++i) {
            ans += (b[i]%3)<<i;
        }
        return ans;
    }
};