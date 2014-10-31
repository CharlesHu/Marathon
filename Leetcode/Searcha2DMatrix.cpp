class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return false;
        bool ans = false;
        for (int i = 0; i < matrix.size(); ++i) {
            if (i+1 >= matrix.size()&&target >= matrix[i][0] ||
            target >= matrix[i][0] && i+1 < matrix.size() && target < matrix[i+1][0]) {
                for (int j = 0; j < matrix[i].size(); ++j) {
                    if (target == matrix[i][j]) {
                        ans = true;
                        break;
                    }
                }
                break;
            }
        }
        return ans;
    }
};