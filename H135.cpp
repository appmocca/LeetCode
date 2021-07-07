class Solution {
public:
    int candy(vector<int>& ratings) {
        //Greendy Algorithm
        //Can find the solution by iteration from left, if right one rate higher than left one, candy++
        //Then make scan from end to start, if the rate of left one higher than right one, left one must keep max() candy
        int ans = 0 ;
        int len = ratings.size() ;
        vector<int> reward(len, 1) ;
        for (int i = 1; i < len; i++)
            if (ratings[i] > ratings[i-1])  reward[i] = reward[i-1] + 1 ;
        for (int i = len - 2; i >= 0; i--)
            if (ratings[i] > ratings[i + 1])reward[i] = max(reward[i+1] + 1, reward[i]) ;
        int sum = accumulate(reward.begin(), reward.end(), 0) ;
        return sum ;
    }
};