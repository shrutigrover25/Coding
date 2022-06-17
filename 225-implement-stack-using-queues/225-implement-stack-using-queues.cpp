class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        
        q2.push(x);
        
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        queue<int>q;
        q=q1;
        q1=q2;
        q2=q;
        
    }
    
    int pop() {
        
        if(q1.empty())
        {
            return 0;
        }
        
        int x=q1.front();
        q1.pop();
        
        return x;
        
    }
    
    int top() {
        
         if(q1.empty())
        {
            return 0;
        }
        
        int x=q1.front();
        
        return x;
        
    }
    
    bool empty() {
        
        return q1.empty();
        
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