class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return ;
        bool column0 = false, line0 = false;
        for (int i = 0; i < matrix.size(); ++i) {
            if (matrix[i][0] == 0) {
                column0 = true;
                break;
            }
        }
        for (int j = 0; j < matrix[0].size(); ++j) {
            if (matrix[0][j] == 0) {
                line0 = true;
                break;
            }
        }
        for (int i = 1; i < matrix.size(); ++i) {
            for (int j = 1; j < matrix[0].size(); ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < matrix.size(); ++i) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < matrix[0].size(); ++j) {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int j = 1; j < matrix[0].size(); ++j) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < matrix.size(); ++i) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (column0) {
            for (int i = 0; i < matrix.size(); ++i) {
                matrix[i][0] = 0;
            }
        }
        if (line0) {
            for (int j = 0; j < matrix[0].size(); ++j) {
                matrix[0][j] = 0;
            }
        }
    }
};