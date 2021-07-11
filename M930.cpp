class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
    unordered_map<int,int>ha;
    ha[0]++;
    int sum=0,num=0;
    for(auto i:nums){
        num+=i;
        if(ha[num-goal])
        sum+=ha[num-goal];

        ha[num]++;
    }
    return sum;
    }
};