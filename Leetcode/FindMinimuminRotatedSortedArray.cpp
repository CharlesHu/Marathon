class Solution {
public:
    int findMin(vector<int> &num) {
        int l = 0, r = num.size()-1;
        while (l < r) {
            int mid = (l+r)/2;
            if (mid == l) return min(num[l], num[r]);
            if (num[mid] > num[r]) {
                l = mid;
            } else {
                r = mid;
            }
        }
        return min(num[l], num[r]);
    }
};