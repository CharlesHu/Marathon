class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int len = 0;
        for (int i = 0; i < n;) {
            int t = A[i];
            A[len++] = t;
            ++i;
            if (i < n && A[i] == t) A[len++] = A[i];
            while (i < n && A[i] == t) ++i;
        }
        return len;
    }
};