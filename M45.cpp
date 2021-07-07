class Solution {
public:
    int jump(vector<int>& nums) {
        int curr = 0, ans = 0, maxDistance = 0 ;
        for (int i = 0; i < nums.size() - 1; i++){
            maxDistance = max(i + nums[i], maxDistance) ;
            if (i == curr){
                curr = maxDistance ;
                ans++ ;
            }
        }
        return ans ;
    }
};