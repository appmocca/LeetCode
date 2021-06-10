class Solution {
public:
    vector<int> printNumbers(int n) {
        int requiredMax = pow(10, n) ;
        vector<int> ans ;
        for (size_t i = 1; i < requiredMax; i++){
            ans.push_back(i) ;
        }
        return ans ;
    }
};