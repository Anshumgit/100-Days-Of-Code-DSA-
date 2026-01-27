// https://www.geeksforgeeks.org/problems/maximum-difference-between-pair-in-a-matrix/1

class Solution {
  public:
    int findMaxValue(vector<vector<int>>& mat, int N) {

        vector<vector<int>> maxMat(N, vector<int>(N));

        // Bottom-right corner
        maxMat[N-1][N-1] = mat[N-1][N-1];
        
        // Last row
        for (int j = N-2; j >= 0; j--) {
            maxMat[N-1][j] = max(maxMat[N-1][j+1], mat[N-1][j]);
        }

        // Last column
        for (int i = N-2; i >= 0; i--) {
            maxMat[i][N-1] = max(maxMat[i+1][N-1], mat[i][N-1]);
        }

        // Remaining cells
        for (int i = N-2; i >= 0; i--) {
            for (int j = N-2; j >= 0; j--) {
                maxMat[i][j] = max(mat[i][j] , 
                    max(maxMat[i+1][j] , maxMat[i][j+1])
                );
            }
        }

        int ans = INT_MIN;

        for (int i = 0; i < N-1; i++) {
            for (int j = 0; j < N-1; j++) {
                ans = max(ans, maxMat[i+1][j+1] - mat[i][j]);
            }
        }

        return ans;
    }
};
 
