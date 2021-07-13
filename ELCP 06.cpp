class Solution {
public:
    int minCount(vector<int>& coins) {
        int sum = 0 ;
        for (int coin : coins)  sum+= coin + 1 >> 1 ;
        return sum ;
    }
};

class Solution {
public:
    int minCount(vector<int>& coins) {
        int ans = 0, len = coins.size() ;
        for (int coin : coins){
            ans += (int)ceil(coin / 2.0); 
        }
        return ans ;
    }
};