class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans ;
        int len = num.size() - 1 ;
        for (int i = len; i >= 0 | k > 0; i--, k/=10){
            if (i >= 0) k += num[i] ;
            ans.push_back(k % 10) ;
        }
        reverse(ans.begin(), ans.end()) ;
        return ans ;
    }
};