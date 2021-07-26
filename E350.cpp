class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())    return intersect(nums2, nums1);
        
        unordered_map <int, int> record;
        for (int num : nums1) record[num]++;
        
        vector<int> ans;
        for (int num : nums2) 
            if (record.count(num)) {
                ans.push_back(num);
                record[num]--;
            }
            if (!record[num])  record.erase(num);
        return ans;
    }
};