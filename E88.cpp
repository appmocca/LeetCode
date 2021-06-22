class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1, tail = m + n - 1, curr ;
        while (p1 >= 0 || p2 >= 0){
            if (p1 == -1)                   curr = nums2[p2--] ;    //If number of nums1 finished adding
            else if (p2 == -1)              curr = nums1[p1--] ;    //If number of nums2 finished adding
            else if (nums1[p1] > nums2[p2]) curr = nums1[p1--] ;    //If nums1[p1] > nums2[p2]
            else                            curr = nums2[p2--] ;    //If nums1[p1] < nums2[p2]
            nums1[tail--] = curr ;                                  //Replacing the number in the nums1
        }
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i != n; ++i)    nums1[m + i] = nums2[i]; sort(nums1.begin(), nums1.end());
    }
};