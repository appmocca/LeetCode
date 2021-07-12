class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return process(nums, 2) ;
    }

    int process(vector<int>& nums, int k){
        int index = 0 ;
        for (auto num : nums)
            //Skip the first k element, and process the rest x which fulfill the condition
            if (index < k or nums[index-k] != num)    nums[index++] = num ;
        return index ;
    }
};