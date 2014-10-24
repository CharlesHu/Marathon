class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        if (triangle.size() == 0) return 0;
        for (int i = 0; i < triangle.size(); ++i) {
            for (int j = 0; j < triangle[i].size(); ++j) {
                if (i-1 >= 0 && j-1 >= 0 && j < triangle[i-1].size()) {
                    triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
                } else if (i-1 >= 0 && j < triangle[i-1].size()) {
                    triangle[i][j] += triangle[i-1][j];
                } else if (i-1 >= 0 && j-1 >= 0) {
                    triangle[i][j] += triangle[i-1][j-1];
                }
            }
        }
        int ans = INT_MAX;
        for (int j = 0; j < triangle[triangle.size()-1].size(); ++j)
            ans = min(ans, triangle[triangle.size()-1][j]);
        return ans;
    }
};