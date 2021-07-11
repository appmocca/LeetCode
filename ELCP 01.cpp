class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int ans = 0 ;
        if (guess[0] == answer[0])  ans++ ;
        if (guess[1] == answer[1])  ans++ ;
        if (guess[2] == answer[2])  ans++ ;
        return ans ;
    }
};

class Solution {
public:
    int game(vector<int>& guess, vector<int>& answer) {
        int ans = 0 ;
        for (int i = 0; i < 3; i++)
            if (guess[i] == answer[i])  ans++ ;
        return ans ;
    }
};