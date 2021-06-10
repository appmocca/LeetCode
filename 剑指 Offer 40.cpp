class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end()) ;
        vector<int> ans ;
        for (size_t i = 0; i < k; i++){
            ans.push_back(arr[i]) ;
        }
        return ans ;
    }
};