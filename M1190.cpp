class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st ;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(')    st.push(i) ;    //Push all pos of (
            if (s[i] == ')'){                   //When meet first ) after all (
                reverse(s.begin()+st.top()+1, s.begin()+i) ;    //Reverse words without brackets
                s.erase(s.begin()+st.top()) ; s.erase(s.begin()+i-1) ;  //Erase brackets
                i-=2 ;  //Since brackets are erased so the length must substract 2
                st.pop() ;  //Pop the last pos of (
            }
        }
        return s ;
    }
};