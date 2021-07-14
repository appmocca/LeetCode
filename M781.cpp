class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> record ;
        for (auto n : answers)  record[n]++ ;
        int ans = 0 ;
        //The minimum number of rabbits with same color is y + 1
        //For the number of rabbit with same color is x + y since y rabbits claims that have other x rabbits with same color
        //So the number of current color is the (number of rabbits)/(color of current rabbits) * number of color
        //Which the equaltion is x / y+1 * y + 1
        for (auto& [y, x] : record)
            ans += (x + y) / (y + 1) * (y + 1) ;
        return ans ;
    }
};