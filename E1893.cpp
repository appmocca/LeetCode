class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        unordered_set<int> record ;
        for (auto& v : ranges)  for (int i = v[0]; i <= v[1]; i++)  record.insert(i) ;
        for (int i = left; i <= right; i++) if (!record.count(i))   return false ;
        return true ;
    }
};