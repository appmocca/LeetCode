class Solution {
public:
    int str2bin(string& str){
    int ans = 0;
    for(auto c:str){
        if((ans & (1<<(c-'a')))!=0)  return -1;
        ans |= (1<<(c-'a'));
    }
    return ans;
}
int maxLength(vector<string>& arr) {
    vector<vector<int>> dp(27, vector<int>{});
    dp[0] = {0};
    for(auto str:arr){
        int len=str.size();
        int bin=str2bin(str);
        if(bin<0)   continue;
        for(int i=26; i>=len; i--){
            if(dp[i-len].size()){
                for(auto item:dp[i-len]){
                    if((item & bin)==0){
                        dp[i].push_back(item|bin);
                    }
                }
            }
        }
    }
    for(int i=26;i>=0;i--){
        if(dp[i].size())   return i;
    }
    return 0;
}
};