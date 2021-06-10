class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows) ;
        for (size_t i = 0; i < numRows; i++){
            ans[i].resize(i + 1) ;  //resize the current subvector size to i + 1
            ans[i][0] = ans[i][i] = 1 ; //make the front and back to the value of 1
            for (size_t j = 1; j < i; j++)
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1] ;   //calc the value form above lines
        }
        return ans ;
    }
};