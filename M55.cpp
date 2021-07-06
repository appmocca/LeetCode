class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size() - 1 ;
        int jump = 0 ;
        for (int i = 0; i <= jump; i++){    //Update jump in each iteration, if the value is 0, will break the loop
            jump = max(jump, i + nums[i]) ;
            if (jump >= len)    return true ;
        }
        return false ;
    }
};