class Solution {
public:
    int strStr(string haystack, string needle) {
        if (!needle.size())     return 0 ;
        int ha = haystack.size() ;
        int ne = needle.size() ;
        
        vector<int> compare(ne + 1) ;
        haystack.insert(haystack.begin(), ' ') ;
        needle.insert(needle.begin(), ' ') ;

        for (int i = 2, j = 0; i <= ne; i++){
            while (j && needle[i] != needle[j+1])   j = compare[j] ;
            if (needle[i] == needle[j+1])   j++ ;
            compare[i] = j ;
        }

        for (int i = 0, j = 0; i <= ha; i++){
            while (j && haystack[i] != needle[j+1]) j = compare[j] ;
            if (haystack[i] == needle[j+1]) j++ ;
            if (j == m) return i - m ;
        }
        return -1 ;        
    }
};