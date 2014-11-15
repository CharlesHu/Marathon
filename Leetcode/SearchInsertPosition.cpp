class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int l = 0, r = n-1;
        if (l > r) return 0;
        while (l <= r) {
            if (l == r) {
                if (target == A[l]) return l;
                else if (target < A[l]) return l;
                else if (target > A[r]) return r+1;
            }
            int mid = (l+r) / 2;
            if (target > A[r]) {
                return r+1;
            } else if (target < A[l]) {
                return l;
            } else if (target < A[mid]) {
                r = mid-1;
            } else if (target > A[mid]) {
                l = mid+1;
            } else if (target == A[mid]) {
                return mid;
            }
        }
        return 0;
    }
};