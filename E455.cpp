class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end()) ;
        sort(s.begin(), s.end()) ;
        int ans = 0 ;
        for (int b : s)
            if (ans < g.size() && g[ans] <= b) ans++ ;
        return ans ;
    }
};