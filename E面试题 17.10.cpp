class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        int mid = nums.size() / 2 ;
        if (count(nums.begin(), nums.end(), nums[mid]) > mid)   //If the number in the middle postion is more than half
            return nums[mid] ;  //Return mid number
        else return -1 ;    //If not, return -1
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> compare ;
        for (int num : nums){
            compare[num]++ ;
            if (compare[num] > nums.size() / 2) return num ;
        }
        return -1 ;
    }
};