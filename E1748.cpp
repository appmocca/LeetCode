class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map <int,int> record ;
        for (int num : nums)    record[num]++ ;
        int sum = 0 ;
        for (int num : nums)    if (record[num] == 1)   sum += num ;
        return sum ;
    }
};