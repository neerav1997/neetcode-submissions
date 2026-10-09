class MyStack {
private :
queue<int> q1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int size = q1.size();
        while(size > 1) {
            int y = q1.front();
            q1.pop();
            q1.push(y);
            size--;
        }
        int x = q1.front();
        q1.pop();
        return x;
        
        }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty() ? true : false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */