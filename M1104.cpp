class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> ans ;
        while (label){
            ans.push_back(label) ;      //Saving nodes in current level
            label >>= 1 ;               //Going to next level
        }   
        reverse(ans.begin(), ans.end()) ;
        int l, r, deep = ans.size() ;
        for (int i = 0; i < deep; i++){
            if ((deep & 1) != (i & 1)) continue ;   //Filping when deep is even, values in odd level, when deep is odd, values in even level
            l = (1 << i) ;
            r = l + l - 1 ;
            ans[i] = r - ans[i] + l ; 
        }
        return ans ;
    }
};