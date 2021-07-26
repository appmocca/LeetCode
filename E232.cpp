class MyQueue {
public:
    stack<int> in, out; 
    /** Initialize your data structure here. */
    MyQueue() {
        while (in.size())   in.pop() ;
        while (out.size())  out.pop() ;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x) ;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if (out.empty())
            while (in.size()){
                out.push(in.top()) ;
                in.pop() ;
            }
        int num = out.top() ;
        out.pop() ;
        return num ;
    }
    
    /** Get the front element. */
    int peek() {
        if (out.empty())
            while (in.size()){
                out.push(in.top()) ;
                in.pop() ;
            }
        return out.top() ;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return out.empty() && in.empty() ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */