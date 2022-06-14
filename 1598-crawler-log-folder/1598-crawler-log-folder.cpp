class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        stack<string>str;
        
        for(int i=0;i<logs.size();i++)
        {
            string ch=logs[i];
            
            if(ch == "./")
            {
                continue;
            }
            
            else if(ch =="../" )
            {
                if(!str.empty())
                {
                str.pop();
                }
                
                else
                {
                    continue;
                }
            }
            
            else
            {
                str.push(ch);
            }
        }
        
        int n=str.size();
        
        
        
        return n;
        
    }
};