class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        priority_queue<int>pq;
        
        int n=stones.size();
        
        for(int i=0;i<n;i++)
        {
            pq.push(stones[i]);
        }
        
        while(pq.size()>1)
        {
            int one=pq.top();
            pq.pop();
            
            int two=pq.top();
            pq.pop();
            
            if(one!=two)
            {
                int diff=abs(one-two);
                pq.push(diff);
            }
        }
        
        if(pq.size()==0)
        {
            return 0;
        }
        
        return pq.top();
        
    }
};