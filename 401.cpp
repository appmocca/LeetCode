class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans ;
        for (size_t h = 0; h < 12; h++)
            for (size_t m = 0; m < 60; m++)
                //Since the time is represented as binary, so search in all iteration.
                //If the binary fits turnedOn, push back the current h & m 
                //__builtin_popcount is counting current 1s
                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn)  //n & (n - 1) is counting 1s either
                    ans.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m)) ;    //If m < 10 need to add a leading zero
        return ans ;
    }
};