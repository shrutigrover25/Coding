class Solution {
public:
    string reorganizeString(string s) {
        
        string str="";
        
        unordered_map<char,int>mp;
        
        priority_queue<pair<int,char>>pq;
        
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        
        while(pq.size()>1)
        {
            auto top1=pq.top();
            pq.pop();
            auto top2=pq.top();
            pq.pop();
            
            str+=top1.second;
            str+=top2.second;
            
            top1.first-=1;
            top2.first-=1;
            
            if(top1.first>0)
              pq.push(top1);
            
            if(top2.first > 0)
                pq.push(top2);
        }
        
        if(!pq.empty()){
            if(pq.top().first > 1)
                return "";
            
            else
                str+=pq.top().second;
        }
        
        return str;
        
    }
};