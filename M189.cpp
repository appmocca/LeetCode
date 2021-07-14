class Solution {
public:
    void reverse(vector<int>& nums, int st, int en){
        while(st < en){
            swap(nums[st++], nums[en--]) ;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size() ;
        k %= n ; //k may greater than n since the array can loops //k must less than n
        reverse(nums, 0, n - 1) ;
        reverse(nums, 0, k - 1) ;
        reverse(nums, k, n - 1) ;
    }
};