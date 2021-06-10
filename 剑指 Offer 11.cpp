class Solution {
public:
    int minArray(vector<int>& numbers) {
        int low = 0 ;
        int high = numbers.size() - 1 ;
        while (low < high){
            int mid = low + (high - low) / 2 ;
            if (numbers[mid] < numbers[high])
                high = mid ;
            else if (numbers[mid] > numbers[high])
                low = mid + 1 ;
            else 
                high-- ;
        }
        return numbers[low] ;
    }
};

// Just for fun
class Solution {
public:
    int minArray(vector<int>& numbers) {
        int ans = INT_MAX ;
        for (size_t i = 0; i < numbers.size(); i++)
            ans = min(ans, numbers[i]) ;
        return ans ;
    }
};