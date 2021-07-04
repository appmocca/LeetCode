class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0 ;
        vector<int > ans ;
        for (int num : nums)    ans.push_back(sum+=num) ;
        return ans ;
    }
};