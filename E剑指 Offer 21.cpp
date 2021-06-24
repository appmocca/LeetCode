//fast & slow pointers
class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int len = nums.size() ;
        int lo = 0, hi = 0 ;
        while (hi < len){
            if (nums[hi] & 1){  //If the number is odd number
                swap(nums[lo], nums[hi]) ;  //Swap the number from back to front
                lo++ ;  //Do not forget to adding lo since the original position is replaced by hi pivot
            }
            hi++ ;  //If the number is even, hi++, lo remain the same
        }
        return nums ;   //Return the input vector after sorting
    }
};


class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        vector<int> ans ;
        for (int num : nums){
            if (num % 2 == 1)   ans.insert(ans.begin(), num) ;
            else ans.push_back(num) ;
        }
        return ans ;
    }
};