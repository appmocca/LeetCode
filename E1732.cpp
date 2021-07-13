class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int len = gain.size() ;
        vector<int> res(len + 1, 0) ;
        for (int i = 1; i <= len; i++)
            res[i] = res[i-1]+gain[i-1] ;
        int ans = 0 ;
        for (int num : res) ans = max(ans, num) ;
        return ans ;
    } 
};