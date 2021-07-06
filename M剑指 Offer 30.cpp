class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> minst, st ;
    MinStack() {
        minst.push(INT_MAX) ;
    }
    
    void push(int x) {
        st.push(x) ;
        minst.push(min() > x ? x : min()) ;
    }
    
    void pop() {
        st.pop() ;
        minst.pop() ;
    }
    
    int top() {
        return st.top() ;
    }
    
    int min() {
        return minst.top() ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */