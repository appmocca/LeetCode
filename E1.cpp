class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> compare ;
        for (int i = 0; i < nums.size(); i++){
            auto it = compare.find(target - nums[i]) ;
            if (it != compare.end())
                return {it -> second, i} ;
            compare[nums[i]] = i ;
        }
        return {} ;
    }
};