class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0 ;
        for (int num : nums){
            if (to_string(num).size() % 2 == 0)    ans++ ;
        }
        return ans ;
    }
};

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0 ;
        for (int num : nums){
            if ((int)(log10(num) + 1) % 2 == 0)    ans++ ;
        }
        return ans ;
    }
};