class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        int len = words.size() ;
        for (int r = 0; r < len; r++)
            for (int c = 0; c < words[r].size(); c++){
                if (c >= len)   return false ;
                if (words[c].size() <= r)   return false; 
                if (words[r][c] != words[c][r]) return false ;
            }
        return true ;
    }
};