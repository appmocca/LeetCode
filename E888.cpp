class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0 ;
        for (auto x : aliceSizes)   sumA += x ;
        for (auto x : bobSizes)     sumB += x ;
        int delta = sumA - sumB >> 1;
        unordered_set<int> record(aliceSizes.begin(), aliceSizes.end()) ;
        for (auto t : bobSizes){
            int x = t + delta ;
            if (record.count(x))    return {x,t} ;
        }   
        return {} ;
    }
};