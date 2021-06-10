class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> ans ;
        vector<int> record ;
        for (size_t l = 1, r = 2; l < r;){
            int sum = (l + r) * (r - l + 1) / 2 ;
            if (sum == target){
                record.clear() ;
                for (size_t i = l; i <= r; i++)
                    record.push_back(i) ;
                ans.push_back(record) ;
                l++ ;
            }
            else if (sum < target)
                r++ ;
            else
                l++ ;
        }
    return ans ;
    }
};