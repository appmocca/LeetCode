class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0)
            return {} ;
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;
        int left = 0, right = cols - 1, top = 0, bottom = rows - 1 ;
        vector<int> ans ;
        while (left <= right && top <= bottom){
            for (int col = left; col <= right; col++)
                ans.push_back(matrix[top][col]) ;
            for (int row = top + 1; row <= bottom; row++)
                ans.push_back(matrix[row][right]) ;
            if (left < right && top < bottom){
                for (int col = right - 1; col > left; col--)
                    ans.push_back(matrix[bottom][col]) ;
                for (int row = bottom; row > top; row--)
                    ans.push_back(matrix[row][left]) ;
            }
            left++ ;
            right-- ;
            top++ ;
            bottom-- ;
        }
        return ans ;
    }
};