class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;
        int n=s.length();
        
        string str="";
        
        for(int i=0;i<n;i++)
        {
            if(!st.empty() && st.top()==s[i])
            {
                st.pop();
            }
            
            else
            {
            st.push(s[i]);
            }
        }
        
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
        
        reverse(str.begin(),str.end());
        
        return str;
                                       
        
    }
};