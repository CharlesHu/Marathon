class Solution {
public:
    int firstMissingPositive(int A[], int n) {
        int ans = 1;
        for (int i = 0; i < n; ++i) {
            if (A[i] >=1 && A[i] <= n && A[i] != i+1 && A[A[i]-1] != A[i]) {
                swap(A[i], A[A[i]-1]);
                --i;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (A[i] != i+1) { ans = i+1; break; }
        }
        return ans;
    }
};