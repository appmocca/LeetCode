class Solution {
public:
    int maximum69Number (int num) {
        string n = to_string(num) ;
        //Only need to filp first 6
        for (char& c : n){
            if (c == '6'){
                c = '9' ;
                break ;
            }
        }
        return stoi(n) ;
    }
};
