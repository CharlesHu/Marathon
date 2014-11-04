class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > ans(n, vector<int> (n, 0));
        int up = 0, right = n-1, down = n-1, left = 0, cur = 1;
        while (up <= down && left <= right) {
            for (int j = left; j <= right; ++j) ans[up][j] = cur++;
            ++up;
            if (up > down) break;
            for (int i = up; i <= down; ++i) ans[i][right] = cur++;
            --right;
            if (left > right) break;
            for (int j = right; j >= left; --j) ans[down][j] = cur++;
            --down;
            if (up > down) break;
            for (int i = down; i >= up; --i) ans[i][left] = cur++;
            ++left;
        }
        return ans;
    }
};