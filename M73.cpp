class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool iszero = false ;
        for (int r = 0; r < matrix.size(); r++) {
            if (!matrix[r][0])  iszero = true;
            for (int c = 1; c < matrix[0].size(); c++) 
                if (!matrix[r][c])    matrix[r][0] = matrix[0][c] = 0;
        }
        for (int r = matrix.size() - 1; r >= 0; r--) {
            for (int c = 1; c < matrix[0].size(); c++) 
                if (!matrix[r][0] || !matrix[0][c]) matrix[r][c] = 0;
            if (iszero) matrix[r][0] = 0;
        }
    }
};