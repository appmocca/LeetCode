class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int len = nums.size(), ans = 0 ;
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                ans += nums[i] == nums[j] ? 1 : 0 ;
        return ans ;
    }
};