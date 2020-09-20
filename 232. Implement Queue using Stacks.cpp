class MyQueue {
    
public:
    stack<int> s1, s2;
    
    /** Initialize your data structure here. */
    
    MyQueue() {
        //nothing
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);   //push is always to s1
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
         if(s2.empty()){ 
            while(!s1.empty()){
                int y = s1.top();
                s1.pop();
                s2.push(y);
            }    
        }
        int x = s2.top(); 
        s2.pop(); 
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        
         if(!s2.empty()) 
            return s2.top();
        while(!s1.empty()){
            int y = s1.top();
            s1.pop();
            s2.push(y);
        }
        return s2.top(); 
    }
    
    //ex 1
    // q = 1 2 3 4 5    after pop 1,   q = 2 3 4 5 
    // s1 = 4 5    s2 = 3 2 (1 was popped )
    
    //now peek ie front if s2 not empty, return s2.top  ie 2
    
    //ex 2
    // q = 1 2 3 4 5    after pop 1 2 3 ,   q =  4 5 
    // s1 = [4 5]    s2 = [ ] (1 2 3 was popped in order )
    
    //now peek ie front if s2 empty,insert all elts from s1 to s2 till s1 is empty
    // s1 = [ ]    s2 = [5 4]   now return s2.top ie 4
    
    /** Returns whether the queue is empty. */
    
    bool empty() {
        if(s1.size() == 0 && s2.size() == 0) 
            return true;
        return false;
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
