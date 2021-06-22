class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> compare ;
        for (int num : nums){
            if (compare.find(num) != compare.end()) return true ;
            compare.insert(num) ;
        }
        return false ;
    }
};