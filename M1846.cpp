class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end()) ;  //Since the question require next number is greater
        arr[0] = 1 ;    //The first number is 1
        int len = arr.size(), ans = arr[0] ;    //At least the minimum ans is 1
        for (int i = 1; i < len; i++){
            arr[i] = min(arr[i], arr[i-1] + 1 ) ;   //Make sure the abs value is less than 1
            ans = max(arr[i], ans) ;    //Update maximum ans
        }
        return ans ;
    }
};
