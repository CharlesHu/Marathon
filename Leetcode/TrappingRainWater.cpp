class Solution {
public:
    int trap(int A[], int n) {
        if (n == 0) return 0;
        int *st = new int[n];
        int cur = A[0], ans = 0;
        for (int i = 0; i < n; ++i) {
            cur = max(cur, A[i]);
            st[i] = cur;
        }
        int h = cur;
        cur = A[n-1];
        for (int i = n-1; i >= 0; --i) {
            cur = max(cur, A[i]);
            st[i] = cur;
            if (A[i] == h) break;
        }
        for (int i = 0; i < n; ++i) {
            ans += st[i] - A[i];
        }
        return ans;
    }
};