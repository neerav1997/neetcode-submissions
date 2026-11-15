class MyQueue {
stack <int> s1;
stack <int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int x;
        if(!s2.empty()) {
            x = s2.top();
            s2.pop();
            return x;
        } else {
            while(!s1.empty()) {
                int x = s1.top();
                s1.pop();
                s2.push(x);
            }
            int y = s2.top();
            s2.pop();
            return y;
        }
    }
    
    int peek() {
        if(!s2.empty()) {
            return s2.top();
        } else {
            while(!s1.empty()) {
                int x = s1.top();
                s2.push(x);
                s1.pop();
            }
            return s2.top();
        }
    }
    
    bool empty() {
        if(s1.empty() && s2.empty()) return true;
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