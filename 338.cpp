class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bit(n + 1) ;
        for (int i = 1; i <= n; i++){
            bit[i] = bit[i & (i-1)] + 1 ;
        }
        return bit ;
    }
};