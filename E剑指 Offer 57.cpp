class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> compare ;
        for (int n : nums){
            if (compare.find(target - n) == compare.end())
                compare[n] = n ;
            else
                return {n, compare[target - n]} ;
        }
        return {} ;
    }
};