class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles, reminder = 0 ;
        while (numBottles >= numExchange){
            ans += numBottles / numExchange ; 
            int tmp = numBottles % numExchange ;
            numBottles /= numExchange ;
            numBottles += tmp ;
        }
        return ans ;
    }
};