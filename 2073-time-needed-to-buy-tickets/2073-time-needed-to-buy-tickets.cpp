class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int count=0;
        queue<pair<int,int>>q;
        
        for(int i=0;i<tickets.size();i++)
        {
            q.push({tickets[i],i});
        }
        
        while(true)
        {
            if(q.front().second!=k)
            {
                int a=q.front().first-1;
                int b=q.front().second;
                q.pop();
                
                if(a!=0)
                {
                    q.push({a,b});
                }
                
                count++;
            }
            
            else
            {
                if(q.front().first==0)
                {
                    return count;
                }
                
                int a=q.front().first;
                a--;
                int b=q.front().second;
                
                q.pop();
                count++;
                q.push({a,k});
                
                if(a==0)
                {
                    break;
                }
            }
        }
        
        
        
        return count;
        
    }
};