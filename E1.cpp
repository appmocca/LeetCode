class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> compare ;
        for (int i = 0; i < nums.size(); i++){
            int tmp = compare[target - nums[i]] ;
            if (tmp)  return{tmp, i} ;
            record[nums[i]] = i ;
        }
        return {} ;
    }
};