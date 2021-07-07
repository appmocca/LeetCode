class MyQueue {
public:
    stack<int> inst, outst ;
    /** Initialize your data structure here. */
    MyQueue() {
        while (inst.size())    inst.pop() ;
        while (outst.size())   outst.pop() ;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        inst.push(x) ;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while (inst.size())
    }
    
    /** Get the front element. */
    int peek() {
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
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