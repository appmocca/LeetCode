class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0 ;
        for (auto& v : words){
            if(check(allowed, v)) ans++ ;
        }
        return ans ;
    }
    
    bool check(string a, string s){
        unordered_set<char> record(a.begin(), a.end()) ;
        for (char c : s)    if (!record.count(c))   return false ;
        return true ;
    }
};

class Solution {
public:
    int countConsistentStrings(string a, vector<string>& s) {
        unordered_set<char> r(a.begin(), a.end()) ;
        int ans = 0 ;
        for (string t : s){
            int len = t.size(), cnt = 0 ;
            for (char c : t)    if (r.count(c)) cnt++ ;
            ans += cnt == len ? 1 : 0 ;
        }
        return ans ;
    }
};