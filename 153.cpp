class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 ;   //Set low pivot
        int high = nums.size() - 1 ;    //Set high pivot
        while (low < high){ //Diving is the fastest
            int mid = low + (high - low) / 2 ;  //To avoid using (low + high) / 2 to prevent exceeding the limit
            if (nums[mid] < nums[high]) //When right side is in ascending order as before state
                high = mid ;
            else if (nums[mid] > nums[high])    //when right side is reorder state
                low = mid + 1 ;
            //Actually there is no excepetion in this situation since the original order is ascending.
            // else
            //     high-- ;
        }
        return nums[low] ;
    }
};