class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return intersection(nums2, nums1) ;
        unordered_set<int> record1(nums1.begin(), nums1.end()), record2(nums2.begin(), nums2.end()) ;
        vector<int> ans ;
        for (int num : record1) if (record2.count(num)) ans.push_back(num) ;
        return ans ;
    }
};