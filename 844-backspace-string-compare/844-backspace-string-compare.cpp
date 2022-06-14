class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>str;
        stack<int>p;
        
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            
            if(!str.empty() && s[i]=='#')
            {
                str.pop();
            }
            
            else if(ch=='#' && str.size()==0)
            {
                continue;
            }
            
            else
            {
                str.push(ch);
            }
        }
        
        for(int i=0;i<t.size();i++)
        {
            char ch=t[i];
            
            if(!p.empty() && t[i]=='#')
            {
                p.pop();
            }
            
            else if(ch=='#' && p.size()==0)
            {
                continue;
            }
            
            else
            {
                p.push(ch);
            }
        }
        
        while(!str.empty() && !p.empty())
        {
            char ans1=str.top();
            char ans2=p.top();
            str.pop();
            p.pop();
            
            if(ans1!=ans2)
            {
                return false;
                break;
            }
        }
        
        if(!str.empty() || !p.empty())
        {
            return false;
        }
        
        return true;
        
    }
};