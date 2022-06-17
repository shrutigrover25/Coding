class MinStack {
    
    stack<int>s1;
    stack<int>ss;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        
        s1.push(val);
        
        if(ss.size()==0 || ss.top()>=val)
        {
            ss.push(val);
        }
        
    }
    
    void pop() {
        
        int ans=s1.top();
        s1.pop();
        
        if(s1.empty() || ans==ss.top())
        {
            ss.pop();
        }
        
    }
    
    int top() {
        
        int x=s1.top();
        return x;
        
    }
    
    int getMin() {
        
        return ss.top();
        
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