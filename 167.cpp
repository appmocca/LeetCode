class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size() ;
        for (int i = 0; i < len; ++i){
            int low = i + 1, high = len - 1 ;
            while (low <= high){
                int mid = (high - low) / 2 + low ;
                if (numbers[mid] == target - numbers[i])
                    return {i + 1, mid + 1} ;
                else if (numbers[mid] > target - numbers[i])
                    high = mid - 1 ;
                else
                    low = mid + 1 ;
            }
        }
        return {-1, -1} ;
    }
};