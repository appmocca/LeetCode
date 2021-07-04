class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c)     return mat ;
        
        vector<int> record ;
        for (vector<int> v : mat)
            for (int n : v)
                record.push_back(n) ;
        
        vector<vector<int>> ans(r, vector<int>(c)) ;
        int len = 0 ;
        
        for (int i = 0; i < r; i++) 
            for (int j = 0; j < c; j++)
                ans[i][j] = record[len++] ;
        return ans ;
    }
};