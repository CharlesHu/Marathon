class Solution {
public:
    int maxSubArray(int A[], int n) {
        if (n <= 0) return 0;
        int ans = INT_MIN, sum = 0;
        for (int i = 0; i < n; ++i) {
            if (sum < 0) {
                sum = A[i];
            } else {
                sum += A[i];
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};