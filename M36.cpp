class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][10] = {0}, col[9][10] = {0}, block[9][10] = {0} ;
        for (int r = 0; r < 9; r++)
            for (int c = 0; c < 9; c++){
                if (board[r][c] == '.') continue ;
                int num = board[r][c] - '0' ;
                if (row[r][num]) return false ;
                if (col[c][num]) return false ;
                if (block[c/3 + (r/3)*3][num]) return false ;

                row[r][num] = 1 ;
                col[c][num] = 1 ;
                block[c/3 + (r/3)*3][num] = 1 ;
            }
        return true ;
    }
};
