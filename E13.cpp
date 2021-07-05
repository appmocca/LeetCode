class Solution {
public:
    int checkNum(char ch){
        switch(ch){
            case 'I': return 1 ;
            case 'V': return 5 ;
            case 'X': return 10 ;
            case 'L': return 50 ;
            case 'C': return 100 ;
            case 'D': return 500 ;
            case 'M': return 1000 ;
            default:  return 0 ;
        }
    }

    int romanToInt(string s) {
        int ans = 0 ;
        int len = s.size() ;
        for (int i = 0; i < len; i++){
            int temp = checkNum(s[i]) ;
            if (checkNum(s[i+1]) > temp){   //When following number if larger
                ans += checkNum(s[i+1]) - temp - temp;  //Since by the end of loop, ans will adding a temp, so need sub 2 temps
                i++ ;   //Skipping the next number
            }
            ans += temp ;
        }
        return ans ;
    }
};