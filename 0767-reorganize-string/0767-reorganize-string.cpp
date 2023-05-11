class Solution {
public:
    string reorganizeString(string s) {
        
        string ans="";
        int n=s.length();
        
        priority_queue<pair<int,char>>pq;
        unordered_map<char,int>mp;
        
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        
        while(pq.size()>1)
        {
            auto one=pq.top();
            pq.pop();
            auto two=pq.top();
            
            
            pq.pop();
            
            ans+=one.second;
            ans+=two.second;
            
            one.first-=1;
            two.first-=1;
            
            if(one.first>=1)
            {
                pq.push({one.first,one.second});
            }
            
            if(two.first>=1)
            {
                pq.push({two.first,two.second});
            }
        }
        
        while(!pq.empty())
        {
            if(pq.top().first>1)
            {
                return "";
            }
            
            else
            {
                 ans+=pq.top().second;
                 pq.pop();
            }
        }
        
        return ans;
        
        
    }
};