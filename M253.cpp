class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        map<int,int> mp ; 
        for (auto& t : intervals){
            mp[t[0]]++ ;
            mp[t[1]]-- ;
        }
        int sum = 0, ans = 0 ;
        for (auto& t : mp){
            sum += t.second ;
            ans = max(ans, sum) ;
        }
        return ans ;
    }
};