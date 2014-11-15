class Solution {
public:
    bool canJump(int A[], int n) {
        if (n <= 0) return true;
        if (A[0] == 0 && n != 1) return false;
        int pos = n-1;
        for (int i = n-1; i >= 0; --i) {
            if (A[i] == 0 && i != 0) {
                pos = i;
                int j = i;
                bool can = false;
                for (; j >= 0; --j) {
                    if (A[j]+j > pos || A[j]+j >= n-1) {
                        can = true;
                        break;
                    }
                }
                if (!can) return false;
                i = j;
            }
        }
        return true;
    }
};