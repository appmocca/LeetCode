class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size() ;
        vector<int> ans (len, 0);   //initialize the return vector
        stack<int> st ;
        for (size_t i = 0; i < len; i++){
            while (!st.empty() && temperatures[i] > temperatures[st.top()]){
                int temp = st.top() ;   //dealing to the top index that fulfill the requirement
                st.pop() ;  //pop the waiting index
                ans[temp] = i - temp ;  //storing the right value
            }
            st.push(i) ;    //when current index is less than temp, pushed to stack for further action
        }
        return ans ;
    }
};