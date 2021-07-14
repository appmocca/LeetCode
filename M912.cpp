class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums, 0, nums.size()-1);
        return nums ;
    }

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

    // Must use ramdom pivot
    int ramdomPartition(vector<int>& nums, int l, int r){
        int i = rand() % (r - l + 1) + l ;
        swap(nums[r], nums[i]) ;
        return partition(nums,l,r);
    }

    void quickSort(vector<int> &res, int left, int right){
        if (left < right){
            int mid = ramdomPartition(res, left, right);
            quickSort(res, left, mid-1);
            quickSort(res, mid+1, right);
        }
    }
};