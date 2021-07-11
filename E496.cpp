class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int maxval = *max_element(nums2.begin(), nums2.end());
        vector<int> ret_hash(maxval + 1,-1);

        vector<int> stk;//单调栈
        stk.reserve(n2);
        for (int i = 0; i < n2; ++i) {
            while (!stk.empty() && stk.back() < nums2[i]) {
                ret_hash[stk.back()] = nums2[i];
                stk.pop_back();
            }
            stk.push_back(nums2[i]);
        }
        //遍历nums1得到结果
        vector<int> ret(n1);
        for (int i = 0; i < n1; ++i) {
            ret[i] = ret_hash[nums1[i]];
        }
        return ret;
    }
};