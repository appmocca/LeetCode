class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> record(nums.begin(), nums.end()) ;         //Set sorted list for me
        int len = record.size() ;         
        if (len < 3)  return *(record.rbegin()) ;           //If the number is less than 3 return the max number
        set<int>::reverse_iterator it = record.rbegin() ;   //If not, return the third max number
        it++ ; it++ ;
        return *it ;
    }
};

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int len = nums.size() ;
        if (len < 3){
            if (len == 2)   return max(nums[0], nums[1]) ;  //If only have two numbers
            return nums[0] ;                                //If only have one
        }
        sort(nums.begin(), nums.end(),greater<int>()) ;     //If more than 2 numbers
        int cnt = 0 ;
        for (int i = 1; i < len; i++){
            if (nums[i] != nums[i-1])   cnt++ ;
            if (cnt == 2)   return nums[i] ;                //If have three different numbers
        }
        return max(nums[0], nums[len-1]) ;                  //If all numbers are same, like only have 1 or 2 different number return to previous situation
    }
};