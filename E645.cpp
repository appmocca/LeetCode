class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> record ;
        for (int num : nums)    record[num]++ ;
        vector<int> ans(2) ;
        for (int i = 1; i <= nums.size(); i++){
            if (record[i] == 2)   ans[0] = i ;
            if (record[i] == 0)   ans[1] = i ;
        }
        return ans ;
    }
};