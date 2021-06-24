class Solution {
public:
    vector<string> permutation(string s) {
        sort(s.begin(), s.end()) ;
        vector<string> ans = {s} ;  //Pushing back the original string
        while (next_permutation(s.begin(), s.end()))    //Make s to next possible string by dictionary sort
            ans.emplace_back(s) ;   //Pushing back the new string
        return ans ;
    }
};