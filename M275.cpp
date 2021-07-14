class Solution {
public:
    int hIndex(vector<int>& citations) {
        int len = citations.size() ;
        int lo = 0, hi = len - 1 ;  //Hi index is len - 1
        //Since the original vector is sorted, division is the most efficient method
        while (lo < hi){
            int mid = hi + lo >> 1 ;
            if (citations[mid] >= len - mid) hi = mid ; //Since the requirement says citation is not greater than mid. If not satisfied, right boundry is mid
            else lo = mid + 1 ;     //If right side satisfied, left boundry is mid + 1 
        }
        return citations[hi] >= len - hi ? len - hi : 0 ;   //Check again if satisfied the requirement(deal with situation of [0])
    }
};