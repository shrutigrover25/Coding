class Solution {
public:
    int maximumScore(int a, int b, int c) {
        
        priority_queue<int>pq;
        
        int count=0;
        
        if(a>0)
            pq.push(a);
        
        if(b>0)
            pq.push(b);
        
        if(c>0)
            pq.push(c);
        
        while(!pq.empty() && pq.size()>1)
        {
            int t1=pq.top();
            pq.pop();
            
            int t2=pq.top();
            pq.pop();
            
            count++;
            
            if(t1>1)
                pq.push(--t1);
            
            if(t2>1)
                pq.push(--t2);
            
        }
        
        
        return count;
    }
};