class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> compare ;
        int i = 0 ;
        for (int num : nums){
            if (compare.count(num))     return true ;   //If the num counted more than 1
            compare.insert(num) ;   //If not repeat, make insertion
            if (compare.size() > k)     compare.erase(nums[i - k]) ;    //If exceed the limit, erase the lo pivot
            i++ ;   //Increasing index
        }
        return false ;
    }
};