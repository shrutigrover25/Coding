class Solution {
public:
    string removeDuplicates(string s) {
        
        int n=s.length();
        
        stack<char>st;
        
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            
            else if(!st.empty() && st.top()==s[i])
            {
                st.pop();
            }
            
            else
            {
                st.push(s[i]);
            }
        }
        
        string res="";
        
        
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        
        reverse(res.begin(),res.end());
        
        return res;
        
    }
};