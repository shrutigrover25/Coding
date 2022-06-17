class Solution {
public:
    bool isValid(string s) {
        
        stack<char>sta;
        
        for(int i=0;i<s.size();i++)
        {
            if(sta.size()==0)
            {
                sta.push(s[i]);
            }
            
            else if(s[i]==')' && sta.top()=='(' || s[i]=='}' && sta.top()=='{' || s[i]==']' && sta.top()=='[')
            {
                sta.pop();
            }
            
            else
            {
                sta.push(s[i]);
            }
            
        }
        
        if(sta.empty())
        {
            return true;
        }
        
        return false;
        
        
    }
};