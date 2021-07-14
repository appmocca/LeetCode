class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> record ;
        for (int num : nums)    record[num]++ ;
        for (int num : nums)    if (record[num] > 1)    return true ;
        return false ;
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> record ;
        for (int num : nums){
            if (record.count(num))  return true ;
            record.insert(num) ;
        }
        return false ;
    }
};