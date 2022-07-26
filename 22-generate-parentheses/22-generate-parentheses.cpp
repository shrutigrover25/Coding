class Solution {
public:
    
void callfunc(int n,vector<string>&ans,int open, int close, string s)
{
    if(open==n && close==n )
    {
        ans.push_back(s);
    }
    
    if(open<n)
    {
        callfunc(n,ans,open+1,close,s+"(");
    }
    
    if(close<open)
    {
        callfunc(n,ans,open,close+1,s+")");
    }
    
}
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;

        string s="";
        
       callfunc(n,ans,0,0,s);
        
        return ans;
    }
};