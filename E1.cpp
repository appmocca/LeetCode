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

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> record ;
        for (int i = 0; i < nums.size(); record[nums[i]] = i, i++)
            if (record.count(target - nums[i])) 
                return {record[target - nums[i]], i} ;
        return {-1,-1} ;
    }
};