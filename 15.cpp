class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size() ;
        if (len < 3)    return {} ;
        vector<vector<int>> ans ;   //initilize the return vector
        sort(nums.begin(), nums.end()) ;    //sort the original vector
        for (size_t i = 0; i < len; i++){//only compare the following two digits
            if (nums[i] > 0)    return ans ;    //if the current sorted number greater than 0, it cannot get answer anymore
            if (i > 0 && nums[i] == nums[i - 1])    continue ;  //if has duplicated number, skip to next ;
            int left = i + 1 ;  //set left pivot
            int right = len - 1 ;   //set right pivot
            while (left < right){
                if (nums[left] + nums[right] > -nums[i])    //when two sum greater than nums[i] move high pivot left to decrease sum
                    right-- ;
                else if (nums[left] + nums[right] < -nums[i])   //move left pivot right to increase sum
                    left++ ;
                else{   //when three sum is equal to zero
                    ans.emplace_back(vector<int>{nums[i], nums[left], nums[right]}) ;
                    left++ ;
                    right-- ;
                    while (left < right && nums[left] == nums[left - 1])    left++ ;    //when left two numbers are same, move right
                    while (left < right && nums[right] == nums[right + 1])  right-- ;   //when right two numbers are same, move left
                }
            }
        }    
        return ans ;
    }
};