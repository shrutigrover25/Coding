class Solution {
public:
    string reverseWords(string s) {
        
        int n=s.length();
        stack<string>st;
        string res="";
        
        for(int i=0;i<n;i++)
        {
            string w;
            
            if(s[i]==' ')
            {
                continue;
            }
            
            while(i<s.length() && s[i]!=' ')
            {
                w+=s[i];
                i++;
                
            }
            
            st.push(w);
        }
        
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
            
            if(!st.empty())
            {
            res+=" ";
            }
        }
        
        return res;
        
        
    }
};