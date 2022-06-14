class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<int> st;
        for(int i=s.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top()==s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;

        
    }
};