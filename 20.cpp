class Solution {
public:
    bool isValid(string s) {
        if (s.size() & 1)   return false ;
        unordered_map <char, char> pairs{
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        stack <char> st ;
        for (char ch : s){
            if (pairs.count(ch)){   //If the char is the right side ones
                if (st.empty() || pairs[ch] != st.top())    //If found right side & stack is empty || pairs is not left side ones
                    return false ;
                st.pop() ;
            }
            else st.push(ch) ;
        }
        return st.empty() ;
    }
};