class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0 ;
        for (auto num : nums)
            switch(num){
                case 0: zero++ ; break ;
                case 1: one++  ; break ;
                case 2: two++  ; break ;
                default: break ;
            }
        for (int i = 0; i < zero; i++) nums[i] = 0 ;
        for (int i = 0; i < one ; i++) nums[zero+i] = 1 ;
        for (int i = 0; i < two ; i++) nums[zero+one+i] = 2 ;
    }
};