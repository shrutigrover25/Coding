class Solution {
public:
    bool isValid(string s) {
        
        int n=s.length();
        stack<char>st;
        
        if(n==1)
        {
            return false;
        }
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(s[i]);
            }
            
            else if(s[i]=='}')
            {
                if(!st.empty() && st.top()=='{')
                {
                    st.pop();
                }
                
                else
                {
                    return false;
                }
            }
            
            else if( s[i]==')')
            {
                if(!st.empty() && st.top()=='(')
                {
                    st.pop();
                }
                
                else
                {
                    return false;
                }
            }
            
            else if( s[i]==']')
            {
                if(!st.empty() && st.top()=='[')
                {
                    st.pop();
                }
                
                else
                {
                    return false;
                }
            }
            
                        
                        
 
            
            
        }
        
        
        if(st.empty())
        {
            return true;
        }
        
        return false;
    }
};