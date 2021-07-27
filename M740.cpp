class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> cnts(10009) ;
        int len = nums.size(), maxSum = 0 ;
        for (int num : nums){
            cnts[num]++ ;
            maxSum = max(maxSum, num) ;
        }
        vector<vector<int>> f(maxSum+1, vector<int>(2)) ;
        for (int i = 1; i <= maxSum; i++){
            f[i][1] = f[i-1][0] + i * cnts[i] ;
            f[i][0] = max(f[i-1][1], f[i-1][0]) ;
        }
        return max(f[maxSum][0], f[maxSum][1]) ;
    }
};