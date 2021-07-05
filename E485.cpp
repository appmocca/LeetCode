class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0, ans = 0 ;
        for (int num : nums){
            if (num == 1){
                cnt++ ; ans = max(ans, cnt) ;
            }   
            else    cnt = 0 ;
        }
        return ans ;
    }
};