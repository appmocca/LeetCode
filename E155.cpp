class MinStack {
public:
    stack<int> minSt;
    stack<int> st ;
    MinStack() {
        minst.push(INT_MAX) ;
    }
    
    void push(int val) {
        st.push(val) ;
        minSt.push(min(minSt.top(), val)) ;
    }
    
    void pop() {
        st.pop() ;
        minSt.pop() ;
    }
    
    int top() {
        return st.top() ;
    }
    
    int getMin() {
        return minSt.top() ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */