class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map<int,bool> record ;
        for (int num : nums){
            if (record[num])    return num ;
            record[num] = 1 ;
        }
        return -1 ;
    }
};