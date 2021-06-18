class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans ;
        while (columnNumber){
            ans += (columnNumber - 1) % 26 + 65 ;   //Since ASCII is from 0, so columnnumner must -1
            columnNumber = (columnNumber - 1) / 26 ;
        }
        reverse(ans.begin(), ans.end()) ;   //the output is reversly
        return ans ;
    }
};