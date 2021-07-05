class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> record(nums.begin(), nums.end()) ;
        vector<int> ans ;
        for (int i = 1; i <= nums.size(); i++)
            if (!record.count(i))   ans.push_back(i) ;
        return ans ;
    }
};

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size() ;
        for (int num : nums) {
            int tmp = (num - 1) % len ;
            nums[tmp] += len ;
        }
        vector<int> ans ;
        for (int i = 0; i < len; i++)   if (nums[i] <= len) ans.push_back(i + 1) ;
        return ans ;
    }
};