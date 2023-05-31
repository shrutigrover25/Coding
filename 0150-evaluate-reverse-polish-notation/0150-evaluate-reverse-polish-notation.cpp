class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        int n=tokens.size();
        stack<int>st;
        
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                int op1=st.top();
                st.pop();
                
                int op2=st.top();
                st.pop();
                
                if(tokens[i]=="+")
                {
                    st.push(op1+op2);
                }
                
                 if(tokens[i]=="-")
                {
                    st.push(op2-op1);
                }
                
                 if(tokens[i]=="*")
                {
                    st.push(op1*op2);
                }
                
                 if(tokens[i]=="/")
                {
                    st.push(op2/op1);
                }
                
                
            }
            
            
            else 
            {
                int data=stoi(tokens[i]);
                st.push(data);
            }
        }
        
        
        return st.top();
        
    }
};