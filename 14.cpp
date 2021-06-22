class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size())   return "" ; //If the size == 0 return NULL
        int len = strs[0].size() ;
        int count = strs.size() ;
        for (size_t i = 0; i < len; i++){
            char ch = strs[0][i] ;
            for (size_t j = 1; j < count; j++)  //Compare from the second space of vector
                //i == strs[j].size() is exceeding the limit, so cut it eariler
                if (i == strs[j].size() || strs[j][i] != ch) 
                    return strs[0].substr(0, i) ;
        }
        return strs[0] ;
    }
};