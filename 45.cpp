class Solution {
public:
    int jump(vector<int>& nums) {
        int maxIndex = 0, len = nums.size(), end = 0, cnt = 0;
        for (int i = 0; i < len - 1; i++) {
            if (maxIndex >= i) {  //at the beginning maxIndex will be updated, the loop breaks when maxIndex less than i
                maxIndex = max(maxIndex, i + nums[i]);  //update the furtherest jump
                if (i == end) { //updaing the ending point
                    end = maxIndex;
                    cnt++; //counter ++ 
                }
            }
        }
        return cnt;
    }
};