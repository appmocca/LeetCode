class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int top = INT_MIN ;
        int ans = 0 ;
        for (size_t i = 0; i < arr.size(); i++){
            if (arr[i] < top)
                return ans ;
            else{
                top = max(top, arr[i]) ;
                ans = i ;
            }
        }
        return -1 ;
    }
};

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0 ;
        for (; i < arr.size() - 1; i++)
            if (arr[i] > arr[i + 1])    break ;
        return i ;
    }
};

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = arr.size() - 1 ;
        while (left <= right){
            int mid = left + (right - left) / 2 ;
            if (arr[mid] > arr[mid + 1])    right = mid - 1 ;
            else                            left = mid + 1 ;
        }
        return left ;
    }
};