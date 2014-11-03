class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        if (obstacleGrid.size() == 0 || obstacleGrid[0].size() == 0) return 0;
        for (int i = 0; i < obstacleGrid.size(); ++i) {
            for (int j = 0; j < obstacleGrid[i].size(); ++j) {
                if (obstacleGrid[i][j] == 1) obstacleGrid[i][j] = -1;
            }
        }
        for (int i = 0; i < obstacleGrid.size(); ++i) {
            for (int j = 0; j < obstacleGrid[i].size(); ++j) {
                if (obstacleGrid[i][j] == -1) continue;
                if (i-1 >= 0 && obstacleGrid[i-1][j] != -1) {
                    obstacleGrid[i][j] += obstacleGrid[i-1][j];
                }
                if (j-1 >= 0 && obstacleGrid[i][j-1] != -1) {
                    obstacleGrid[i][j] += obstacleGrid[i][j-1];
                }
                if (i == 0 && j == 0) obstacleGrid[i][j] = 1;
            }
        }
        int ans = obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
        return (ans==-1)?0:ans;
    }
};