class CQueue {
    stack<int> deleteSt, pushSt ;
public:
    CQueue() {
        while (!pushSt.empty())     pushSt.pop() ;  //Make sure both stack are empty
        while (!deleteSt.empty())   deleteSt.pop() ;
    }
    
    void appendTail(int value) {
        pushSt.push(value) ;
    }
    
    int deleteHead() {
        if (deleteSt.empty()){                  //While deleteStack is empty, copy pushStack reversly
            while (!pushSt.empty()){
                deleteSt.push(pushSt.top()) ;
                pushSt.pop() ;
            }
        }
        if (deleteSt.empty())     return -1 ;   //If deleteStack is empty, return -1
        else{
            int tmp = deleteSt.top() ;          //Delete element
            deleteSt.pop() ;
            return tmp ;
        }
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */