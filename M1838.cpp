class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        const int n = nums.size();
        sort(nums.begin(),nums.end());
        long cost = 0;//已消耗的操作次数
        int l = 0, r = 1;
        int ans = 1;
        while(r < n)
        {
            cost += (long)(nums[r] - nums[r-1])*(r - l);//[l,r-1]的所有元素都要加上 nums[r] - nums[r-1]
            while(cost > k)//窗口右边界不能拉到 r
                //注意，这里不是 cost -= (nums[r] - nums[l]); 害我debug 了好久 
                cost -= (nums[r] - nums[l++]);//压缩窗口，回收消耗的操作次数
            ans = max(ans, r++ - l + 1);// [l,r] 的所有元素在执行最多 k 次操作后，都成为 nums[r]
        }
        return ans;
    }
};