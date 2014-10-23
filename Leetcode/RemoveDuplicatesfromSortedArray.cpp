class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int len = 0;
        for (int i = 0; i < n; ++i) {
            while (i+1 < n && A[i] == A[i+1]) ++i;
            A[len++] = A[i];
        }
        return len;
    }
};