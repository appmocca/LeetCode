class Solution {
public:
    vector<string> ans ;
    vector<string> generateParenthesis(int n) {
        recursive(n, n, 2*n, "") ;  //The number of left & right brackets is n and the sum of brackets is 2n
        return ans ;
    }
    
    void recursive(int left, int right, int level, string str){
        if (!level) return ans.push_back(str) ;                     //If cannot go deeper, push back the answer
        if (left)   recursive(left-1, right, level-1, str+"(") ;    //Deal with all left brackets then right ones
        if (right > left)   recursive(left, right-1, level-1, str+")") ;    //In each iteration add right brackets
    }
};