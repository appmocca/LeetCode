class Solution {
public:
    int partition(vector<int> &a, int left, int right){
        int pivot = a[right];
        int i = left - 1;
        for (int j = left; j < right; j++){
            if (a[j] <= pivot)
                swap(a[++i], a[j]);
            }
        swap(a[i+1], a[right]);
        return i + 1;
    }

    void quickSort(vector<int> &res, int left, int right){
        if (left < right){
            int mid = partition(res, left, right);
            quickSort(res, left, mid-1);
            quickSort(res, mid+1, right);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        quickSort(nums, 0, nums.size()-1);
        return nums[nums.size() - k] ;
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()) ;
        return nums[nums.size() - k] ;
    }
};