class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans="";
        stack<char>st;
        
        int n=s.length();
        
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                if(st.empty())
                {
                    st.push(s[i]);
                }
                
                else
                {
                    st.push(s[i]);
                    ans+='(';
                }
            }
            
            
            else 
            {
                if(st.size()>1)
                {
                    ans+=')';
                    st.pop();
                }
                
                else
                {
                    st.pop();
                }
            }
        }
        
        return ans;
        
    }
};