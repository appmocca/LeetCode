class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        //Chips move to even index, chips on odd index has a cost of 1
        //Chips move to odd  index, chips on even index has a cost of 1
        //Therefore, get two results and return minimum
        int cnt1 = 0, cnt2 = 0 ;
        for (int po : position){
            if (!(po & 1))    cnt2++ ;
            else cnt1++ ;
        }
        return min(cnt1, cnt2) ;
    }
};