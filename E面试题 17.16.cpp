class Solution {
public:
    int massage(vector<int>& nums) {
        int curr = 0, prev = 0 ;
        for (int num : nums){
            int temp = max(curr, prev + num);
            prev = curr ;
            curr = temp ;
        }
        return curr ;
    }
};